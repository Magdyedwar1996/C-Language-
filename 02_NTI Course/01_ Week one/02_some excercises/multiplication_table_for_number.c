/****************************************************************/
/* Auter   	   : Magdy Edwar	 								*/
/* Version 	   : V01											*/
/* Date    	   : 5 Jul 											*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>
#include <>
void main(void)
{

	int num;
	printf("plz enter an integer number: ");
	scanf("%d", &num);
	
	for(int i=0; i<=12 ; i++)
	{
		printf("%d x %d = %d\n", i, num, (i*num) );
	}	

}