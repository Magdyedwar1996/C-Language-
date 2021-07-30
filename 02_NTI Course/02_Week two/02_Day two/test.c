// this is the first lab 
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"



void main()
{
	
	u32 x ;    // 4 bytes 
	printf("The size of x is : %d\n",sizeof(x));
	int *ptr1 [10];   // 10 * 8 bytes
	printf("The size of ptr1 is : %d\n",sizeof(ptr1));
	int (*ptr2) [10];   // 8 bytes  
	printf("The size of ptr2 is : %d\n",sizeof(ptr2));

}
