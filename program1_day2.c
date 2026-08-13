/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
 int l;
 int b;
  scanf("%d %d", &l,&b);
  printf("Area=%d ," ,l*b); 
  printf("Perimeter=%d",2*(l+b));
  return 0;
}

/*
D:\100days>gcc program1_day2.c -o program1_day2.out

D:\100days>program1_day2.out
2 6
Area=12 ,Perimeter=16
*/