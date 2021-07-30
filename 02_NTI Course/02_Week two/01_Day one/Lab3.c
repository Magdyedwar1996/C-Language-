#include<stdio.h>
// Global definitions 
int *Num1, *Num2 ; 
void Func(int *Num1 , int *Num2 );
int *PtrToSum,*PtrToSub ; 

void main(void)
{
	printf("Please enter the first number:");
	scanf("%d",Num1);
	printf("Please enter the second number:");
	scanf("%d",Num2);	
	Func(Num1,Num2);
	printf("The Sum = %d\n" , *PtrToSum);
	printf("The Sub = %d\n" , *PtrToSub);
}
void Func(int *Num1,int *Num2 )
{
	*PtrToSum = *Num1 + *Num2 ;
	*PtrToSub = *Num1 - *Num2 ;
}