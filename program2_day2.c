/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.


Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{ float r;
   scanf("%f", &r);
   printf("Area=%f,", 3.14159*r*r);
   printf(" Circumference=%f", 2*3.14159*r);
  return 0;
}
/*
D:\100days>gcc program2_day2.c -o program2_day2.out

D:\100days>program2_day2.out
7
Area=153.937910, Circumference=43.982260
*/
