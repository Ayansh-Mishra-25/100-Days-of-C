/*
Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
 
 int main()
 {
   int a,b,t;
   scanf("%d %d", &a, &b);
   t=a;
   a=b;
   b=t;
   printf("After Swap: %d",a);
   printf(" %d" ,b);
   
   return 0;
   }
   
/*
 D:\100days>gcc program2_day3.c -o program2_day3.out

D:\100days>program2_day3.out
2 3
After Swap: 3 2

*/