//C Function to compute sum of the array elements using pointers.
#include <stdio.h>
#define SIZE    10 
int SumArrayElements(int * PtrToArray);
int main ()
{
	int arr[SIZE] ;
	for (int i = 0 ; i< SIZE ; i++)
	{
		scanf("%d",arr + i);
	}
	printf("The summation is :%d ", SumArrayElements(arr));
	
}


int SumArrayElements(int * PtrToArray)
	{
		int sum = 0 ; 
		for (int i=0 ; i<SIZE ; i++)
		{
			
			 sum += *(PtrToArray+i);
		}
		return sum ; 
	
	
	
	}