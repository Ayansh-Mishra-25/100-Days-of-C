/*
Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.


Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main()
{
  int day;
  scanf("%d",&day);
  switch(day)
  {
  case 1:
  printf("Monday");
  break;
  case 2:
  printf("Tuesday");
  break;
  case 3:
  printf("Wednesday");
  break;
  case 4:
  printf("Thursday");
  break;
  case 5:
  printf("Friday");
  break;
  case 6:
  printf("Saturday");
  break;
  case 7:
  printf("Sunday");
  break;
  }
  return 0;
  }
/*
D:\100days>gcc program2_day10.c -o program2_day10.out

D:\100days>program2_day10.out
4
Thursday
*/