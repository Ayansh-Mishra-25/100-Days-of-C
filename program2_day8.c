/*
Q16: Write a program to input three numbers and find the largest among them using if–else.

Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
 int main()
 {
  int a,b,c,large;
  scanf("%d%d%d",&a,&b,&c);
  large=a;
  if(b>large)
  large=b;
  else
  large=c;
  printf("Largest is %d", large);
  return 0;
  }
  
 
 