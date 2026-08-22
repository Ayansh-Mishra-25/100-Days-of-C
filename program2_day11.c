/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.


Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

 int main()
 {
   float cp,sp,amt;
   scanf("%f %f",&cp,&sp);
   if(sp>cp)
   { amt= ((sp-cp)/cp)*100;
     printf("Profit %f%",amt);
	 }
	else if(cp>sp)
	{ amt= ((cp-sp)/cp)*100;
	  printf("Loss %f%",amt);
	  }
	else
	printf("No Profit No Loss");
	
	return 0;
	}
/*
D:\100days>gcc program2_day11.c -o program2_day11.out

D:\100days>program2_day11.out
1500 1400
Loss 6.666667
D:\100days>gcc program2_day11.c -o program2_day11.out

D:\100days>program2_day11.out
1000 1200
Profit 20.00000
*/
	