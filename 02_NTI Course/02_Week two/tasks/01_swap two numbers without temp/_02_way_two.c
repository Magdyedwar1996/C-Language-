// swapping two numbers without temp way two
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
	
	
	*ptr1 = (*ptr1)  ^  (*ptr2);	// (1)
	*ptr2 = (*ptr1)  ^ (*ptr2);     // (2)
	*ptr1 = (*ptr1)  ^ (*ptr2);  	// (3)
	
}



/*
           (1)               (2)                       (3)
 20 =   00010100        30 =  00011110            30 =  00011110
 10 =   00001010        20 =  00010100            10 =  00001010
  ----------------      --------------            --------------
 30 = 	00011110        10 =  00001010            20 =  00010100 


*/









