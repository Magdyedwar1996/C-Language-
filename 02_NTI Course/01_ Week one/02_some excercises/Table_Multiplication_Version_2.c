/****************************************************************/
/* Auter   	   : Magdy Edwar	 								*/
/* Version 	   : V02											*/
/* Date    	   : 5 Jul 											*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>
#include <conio.h>
int  main(void)
{

	int num;
	printf("please enter an integer number to get the table multiplication to : ");
	scanf("%d", &num);
	
	for (int n = 1 ; n <= num ; n++)
		{
		printf("Table:%d		", n );
		}
		printf("\n\n");
		
	for(int i=1; i<=12 ; i++)
	{		
		for (int j = 1 ; j <= num ; j++)
		{
		printf("%d x %d = %d	", j, i, (i*j) );
		}
		printf("\n\n");
		
	}
	getch();
return 0 ; 	

}