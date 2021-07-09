/****************************************************************/
/* Auter   	   : Abanoub kamal	 								*/
/* Version 	   : V01											*/
/* Date    	   : 7 Jul 2021										*/
/* Discription : 					                  			*/
/****************************************************************/
#include <stdio.h>

void CLR_BIT(int n , int var);
void SET_BIT(int n , int var);
void TOG_BIT(int n , int var);
int  GET_BIT(int n , int var);

void main(void)
{
	int n, value;
	
	printf("plz enter a value : ");
	scanf("%d", &value);
	printf("plz enter tne bit number : ");
	scanf("%d", &n);
	printf("\n");
	
	
	//printf("the value befor CLEAR %d \n", value);
	CLR_BIT(n,value);
	//printf("the value after CLEAR %d \n", value);


	//printf("the value befor SET %d \n", value);	
	SET_BIT(n,value);
	//printf("the value after SET %d \n", value);
	
	//printf("the value befor TOGGLE %d \n", value);	
	TOG_BIT(n,value);
	//printf("the value after TOGGLE %d \n", value);
	
	//printf("the value befor GET %d \n", value);	
	GET_BIT(n,value);
	//printf("the value after GET %d \n", value);
}

////////////////////////////////////////////////////////////////
void CLR_BIT(int n , int value)
{
	printf("the origin value = %d \n", value);
	value &= ~(1<<n);
	printf("CLR: the modified value = %d\n\n", value);
}


////////////////////////////////////////////////////////////////
void SET_BIT(int n , int value)
{
	printf("the origin value = %d \n", value);
	value |= (1<<n);
	printf("SET: the modified value = %d\n\n", value);
}


///////////////////////////////////////////////////////////////
void TOG_BIT(int n , int value)
{
	printf("the origin value = %d \n", value);
	value ^= (1<<n);
	printf("TOG: the modified value = %d\n\n", value);
}


/////////////////////////////////////////////////////////////
int  GET_BIT(int n , int value)
{
	int value;
	printf("the origin value = %d \n", value);
	value = 1 & (var>>n);
	printf("GET: the bit value = %d\n\n", value);
}
