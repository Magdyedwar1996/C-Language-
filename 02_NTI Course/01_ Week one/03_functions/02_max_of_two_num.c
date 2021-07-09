/****************************************************************/
/* Auter   	   : Magdy Edwar 	 								*/
/* Version 	   : V01											*/
/* Date    	   : 6 Jul 											*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>

int Get_Max(int num1, int num2);

void main(void)
{
	int num1,num2,max;
	printf("plz enter a number1: ");
	scanf("%d", &num1);
	printf("plz enter a number2: ");
	scanf("%d", &num2);
	
	max = Get_Max(num1,num2);
	
	printf("the maximum value is %d", max);
}

int Get_Max(int num1, int num2)
{
	int max;
	if(num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	return max;
}