/****************************************************************/
/* Auter   	   : Magdy Edwar	 								*/
/* Version 	   : V01											*/
/* Date    	   : 5 Jul 											*/
/* Discription : this is a simple login system using swtich case */
/****************************************************************/
#include <stdio.h>

void main(void)
{
	int ID;
	printf("please enter your ID : ");
	scanf("%d", &ID);
	
	switch(ID)
	{
		case 1234: printf("your name is Ahmed."); break;
		case 5678: printf("your name is Youssef."); break;
		case 1145: printf("your name is Mina."); break;
		default  : printf("Wrong ID"); break; 
	}
		
}