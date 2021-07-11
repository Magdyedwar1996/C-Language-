// Passing by reference 
#include<stdio.h>
// This is the prototype of the function that takes two pointers
int Sum(int*,int*);
int Result = 0;

int main(void)
{
	int Num1,Num2;
	
	printf("Please enter the value of First Number:");
	scanf("%d",&Num1);
	printf("Please enter the value of Second Number:");
	scanf("%d",&Num2);
	Result = Sum(&Num1,&Num2);
	printf("The Sum of the two numbers is  = %d" , Result);
	return 0 ;
	
}

int Sum(int *PtrToNum1,int *PtrToNum2)
{
	
	Result=(*PtrToNum1)+(*PtrToNum2);
	return Result;
}