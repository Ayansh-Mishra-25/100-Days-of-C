/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main()
{ int n1;
  int n2;
  scanf("%d %d" ,&n1,&n2);
  printf("Sum = %d\n" , n1+n2);
  
  return 0;
  }
 
 
 /*
   D:\100days>gcc program1_day1.c -o program1_day1.out

   D:\100days>program1_day1.out
   23 45
   Sum = 68
*/