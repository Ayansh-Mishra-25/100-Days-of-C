/*
Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
int main()
{
 int year;
 scanf("%d",&year);
 if(year%4==0)
 {
   if(year%400==0)
   printf("Leap year");
   else
   printf("not a Leap Year");
   }
  return 0;
}
/*
D:\100days>gcc program1_day7.c -o program1_day7.out

D:\100days>program1_day7.out
1900
not a Leap Year
D:\100days>program1_day7.out
2000
Leap year
*/  
   