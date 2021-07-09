/****************************************************************/
/* Auter   	   : Magdy Edwar 	 								*/
/* Version 	   : V01											*/
/* Date    	   : 6 Jul 											*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>

void main(void)
{
	int arr[10];
	for(int i=0 ; i<10 ; i++)
	{
		printf("plz enter value %d: ", i);
		scanf("%d", arr + i);
	}
	printf("the values entered in reverse order is\n");
	for(int i=9 ; i>=0 ; i--)
	{
		printf("%d   ", arr[i]);
	}
}
