/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit


Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
 int unit,cost;
 scanf("%d", &unit);
 if(unit<=100)
 {cost=unit*5;
  printf("Bill: %d",cost);
  }
  else if(unit>100&&unit<=200)
  {cost=unit*7;
   printf("Bill: %d",cost);
  }
  else if(unit>200&&unit<=300)
  { cost=unit*10;
    printf("Bill: %d",cost);
	
	}
  else
  {cost=unit*12; 
  printf("Bill: %d",cost);
  }
  return 0;
  }