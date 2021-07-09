/****************************************************************/
/* Auter   	   :Magdy Edwar 	 								*/
/* Version 	   : V01											*/
/* Date    	   : 6 Jul 											*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>


void swap(void);
int num1,num2;
void main(void)
{
	printf("Enter two number you want to swap : \nnumber 1 :");
	scanf("%d",&num1);
	printf("number 2 : ");
	scanf("%d" , &num2);
	printf("\nthe origin numbers are %d %d\n", num1,num2);
	
	swap();
	
	printf("the swaped numbers are %d %d", num1,num2);
}

void swap(void)
{
	int temp ; 
	temp = num2;
	num2 = num1;
	num1 = temp;
}