/****************************************************************/
/* Auther   	   : Magdy Edwar  								*/
/* Version 	   : V01											*/
/* Date    	   : 5 Jul 											*/
/* Discription : this file calculate the salaty of an 			*/
/*               employee depending on the hour rate and the	*/	
/*				 number of hours                    			*/
/****************************************************************/
#include <stdio.h>
#include <conio.h>

int  main(void)
{
	int hour_rate, hours;
	float salary;
	hour_rate = 50;
	
	printf("plz enter the working hours: ");
	scanf("%d",&hours);
	salary = hour_rate*hours;
	
	if(hours<40)
	{
		salary -= 0.1*salary;
	}
	
	printf ("\nhe salary = %.1f L.E\n",salary);
	
	getch();
	return 0 ; 
}