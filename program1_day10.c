/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a==b&&a==c)
 printf("Equilateral");
 
 else if(a==b||b==c||a==c)
 printf("Isosceles");
 
 else
 printf("Scalene");
 
 return 0;
 }
/*
D:\100days>gcc program1_day10.c -o program1_day10.out

D:\100days>program1_day10.out
4 4 4
Equilateral
D:\100days>gcc program1_day10.c -o program1_day10.out

D:\100days>program1_day10.out
4 4 5
Isosceles
D:\100days>gcc program1_day10.c -o program1_day10.out

D:\100days>program1_day10.out
6 7 8
Scalene
*/
 