/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

  int main()
  { float cel,far;
    scanf("%f",&cel);
	far= (cel*(9/5))+32;
	printf("Fahrenheit= %f",far);
	return 0;
	}

/*
D:\100days>gcc program1_day3.c -o program1_day3.out

D:\100days>program1_day3.out

0
Fahrenheit= 32.000000
*/	
	
    