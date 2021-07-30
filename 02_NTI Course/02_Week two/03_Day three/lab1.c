// this is the first lab 
#include <stdio.h>
#include <stdlib.h>
int * Seperate_Even_Numbers(int *ptr ,int length);
extern int TotalEvenNumbers ;  
//int array[10] ; 
void main()
{
	
	int array[]= {12 , 15 ,17 , 19 , 187 , 126 , 145 ,12 ,13 ,24};
    int length = (sizeof(array)/sizeof(int));
	int * Pointer = Seperate_Even_Numbers(array, length);
	
	for (int i=0;i<TotalEvenNumbers ; i++)
	{
		
		printf("%d\n",Pointer[i]);
	}
}
