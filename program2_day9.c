/*
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main()
{
 int mks;
 scanf("%d",&mks);
 if(mks>=90&&mks<=100)
 printf("Grade A");
 
 else if(mks>=80&&mks<90)
 printf("Grade B");
 
 else if(mks>=70&&mks<80)
 printf("Grade C");
 
 else if(mks>=60&&mks<70)
 printf("Grade C");
 
 else
 printf("Grade F");
 
 return 0;
 }
/*
D:\100days>program2_day9.out
99
Grade A
D:\100days>gcc program2_day9.c -o program2_day9.out

D:\100days>program2_day9.out
45
Grade F
*/ 
  
 