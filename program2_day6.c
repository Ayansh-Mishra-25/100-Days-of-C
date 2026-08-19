/*
Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 if(n<=0)
 { 
 if(n<0)
 printf("Negative");
 else
 printf("Zero");
 }
 else
 printf("Positive");
 return 0;
 }
 /*
 D:\100days>gcc program2_day6.c -o program2_day6.out

D:\100days>program2_day6.out
34
Positive
D:\100days>program2_day6.out
-34
Negative
D:\100days>program2_day6.out
0
Zero
*/