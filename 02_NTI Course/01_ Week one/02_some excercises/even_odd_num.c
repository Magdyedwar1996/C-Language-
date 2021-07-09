/****************************************************************/
/* Auter   	   : Magdy Edwar 								*/											*/
/* Date    	   : 5 Jul 											*/
/* Discription :this code is to find the even and odd numbers */ 				                  			*/
/****************************************************************/
#include <stdio.h>
#include <conio.h>
int  main(void)
{
	int num;
	printf("please enter a num: ");
	scanf("%d", &num);
	if( (num%2) == 0)
	{
		printf("the number is even");
		
	}
	else
	{
		printf("the number is odd");
	}
	getch();
	return 0 
}	