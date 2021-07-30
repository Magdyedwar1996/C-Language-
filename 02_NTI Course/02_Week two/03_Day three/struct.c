#include <stdio.h>
#include <stdlib.h>
struct employee
{
	float salary ; 
	float bonus ; 
	float deduction ; 
	
}Ahmed , Waleed , Amr ;
int main()
{
	printf("Enter The salary of Ahmed : ");
	scanf("%f",&Ahmed.salary);
	printf("Enter The bonus of Ahmed : ");
	scanf("%f",&Ahmed.bonus);
	printf("Enter The deduction of Ahmed : ");
	scanf("%f",&Ahmed.deduction);
	/////////////////////////////////////////////////////////////////
	printf("Enter The salary of Waleed : ");
	scanf("%f",&Waleed.salary);
	printf("Enter The bonus of Waleed : ");
	scanf("%f",&Waleed.bonus);
	printf("Enter The deduction of Waleed : ");
	scanf("%f",&Waleed.deduction);
	///////////////////////////////////////////////////////////////
	printf("Enter The salary of Amr : ");
	scanf("%f",&Amr.salary);
	printf("Enter The bonus of Ahmed : ");
	scanf("%f",&Amr.bonus);	
	printf("Enter The deduction of Ahmed : ");
	scanf("%f",&Amr.deduction);
	
	
	float salaries = Ahmed.salary + Waleed.salary + Amr.salary ;
	float bonuss =Ahmed.bonus +  Amr.bonus + Waleed.bonus ; 
	float deductions =Ahmed.deduction +  Amr.deduction + Waleed.deduction; 
	printf("all the money will be paid is %f",salaries +bonuss  - deductions );
	
} 

