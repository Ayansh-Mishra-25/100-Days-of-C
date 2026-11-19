/*
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.


Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main()
{
 int day,fine;
 scanf("%d", &day);
 if(day>=1&&day<=5)
 {fine=2;
  printf("Fine Rs%d",fine);
  }
  else if(day>=6&&day<=10)
  {fine=4;
   printf("Fine Rs%d",fine);
  }
  else if(day>=11&&day<=20)
  { fine=6;
    printf("Fine Rs%d",fine);
	}
  else
   printf("Membership Cancelled");
  return 0;
  }
/*
D:\100days>gcc program1_day12.c -o program1_day12.out

D:\100days>program1_day12.out
14
Fine Rs6
D:\100days>gcc program1_day12.c -o program1_day12.out

D:\100days>program1_day12.out
29
Membership Cancelled
D:\100days>gcc program1_day12.c -o program1_day12.out

D:\100days>program1_day12.out
3
Fine Rs2
*/