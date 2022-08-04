// swapping two numbers without temp way one 
#include <stdio.h>
void Swap_Numbers(int * ptr1 ,int *ptr2);
void main ()
{
	int x , y ; 
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	printf("\nBefore Swapping :\n \t x : %d \t y : %d \n",x,y);
	Swap_Numbers(&x , &y);
	printf("\nAfter Swapping  :\n \t x : %d \t y : %d \n",x,y);
	
}
void Swap_Numbers(int * ptr1 ,int *ptr2)
{
	
	
	*ptr1 = (*ptr1) * (*ptr2);		 // 3 * 5 
	*ptr2 = (*ptr1)/(*ptr2);  		 // 15 / 5 = 3 
	*ptr1 = (*ptr1)/(*ptr2);  		// 15 / 3 = 5 
	
}