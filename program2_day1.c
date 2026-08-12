/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
  int n1;
  int n2;
  
  scanf("%d %d", &n1,&n2);
  printf("Sum=%d,",n1+n2);
  printf(" Diff=%d,",n1-n2);
  printf(" Product=%d,",n1*n2);
  printf(" Quotient=%d",n1/n2);
  
  return 0;
  }

/*
D:\100days>gcc program2_day1.c -o program2_day1.out

D:\100days>program2_day1.out
10 2
Sum=12, Diff=8, Product=20, Quotient=5
*/  
