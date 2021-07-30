#include <stdio.h>
#include <stdlib.h>

//int array[10] ;
int *PtrToEvenArray ; 
int TotalEvenNumbers = 0  ; 

int * Seperate_Even_Numbers(int *ptr, int n )
{
	for (int i = 0 ; i< n ; i++)
	{
		if(ptr[i]% 2 == 0)
		{
			TotalEvenNumbers ++;	

		}
	}
	
	int * PtrToEvenArray = (int *)malloc(TotalEvenNumbers*sizeof(int));
		
		for (int i = 0 ; i<10; i++)
		if(ptr[i]% 2 == 0)
		{
			int u = 0 ;
			PtrToEvenArray[u]=ptr[i];
			u++ ; 
		}
		return PtrToEvenArray ; 
	
	}	
