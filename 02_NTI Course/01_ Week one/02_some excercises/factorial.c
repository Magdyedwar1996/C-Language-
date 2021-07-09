/****************************************************************/
/* Auther   	   : Magdy Edwar	 								*/											
/* Date    	   : 5 Jul 											*/
/* Discription : this code is to find the factorial of a number */					                  		
/****************************************************************/
#include <stdio.h>
#include <conio.h>
int  main(void)
{
	int num ,  factorial = 1;
	printf("plz enter a number to calculate its factorial: ");
	scanf("%d", &num);
	while(num > 0 )
	{
		factorial *= num;
		num --;
	}
	printf("the factorial is  = %d", factorial);
	getch();
	return 0 ;

}