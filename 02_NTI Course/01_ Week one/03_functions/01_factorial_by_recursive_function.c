/****************************************************************/
/* Auter   	   : Magdy Edwar  								*/
/* Version 	   : V01											*/
/* Date    	   : 6 Jul 											*/
/* Discription : this recursive function to get the factorial of a number  */
/****************************************************************/
#include <stdio.h>

int factorial(int num);

void main(void)
{
	int num, fact_val;
	printf("plz enter a number to return its factorial: ");
	scanf("%d", &num);
	
	fact_val = factorial(num);
	
	printf("the factorial = %d" , fact_val);
}

int factorial(int num)
{
	
	if(num == 1)
		return 1;
	
	return num * factorial(num-1);
}
