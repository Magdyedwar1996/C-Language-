/*
(6) Write a C function to swap the contents of two arrays with
the same length using pointers.
*/
#include <stdio.h>
#define ArraySize   10

void SwapTwoArrays(int *PtrToArr1 , int *PtrToArr2, int length);

int arr1[ArraySize];
int arr2[ArraySize];
//int  TempArr[ArraySize];
void main ()
{
	printf("Enter the values of the array_1 : \n");
	// taking the elements of the array from the user
	for (int  i = 0 ; i < ArraySize ; i++)
	{
		printf("%d-Element %d : ",i+1, i);
		scanf("%d",&arr1[i]);
		//printf("\n");
	}
	printf("\n");
	printf("Enter the values of the array_2: \n");
	for (int  i = 0 ; i < ArraySize ; i++)
	{
		printf("%d-Element %d : ",i+1, i);
		scanf("%d",&arr2[i]);

	}
	printf("\n");
	/*
	printing the two arrays before Swapping
	*/
	printf("arr_1 : \n");
	for (int  i = 0 ; i < ArraySize;  i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n\n");
	printf("arr_2: \n");
	for (int  i = 0 ; i < ArraySize;  i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n////////////////////\n");
	
	//
	//
	//
	SwapTwoArrays(arr1 , arr2, ArraySize);
	//
	//
	//

	/*
	printing the two arrays after Swapping
	*/
	printf("arr_1 :  \n");
	for (int  i = 0 ; i < ArraySize;  i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n\n");
	printf("arr_2: \n");
	for (int  i = 0 ; i < ArraySize;  i++)
	{
		printf("%d ",arr2[i]);
	}

}


void SwapTwoArrays(int *PtrToArr1 , int *PtrToArr2, int length)
{
    int i , temp ;
	
	for ( i = 0 ; i < length; i++)
	{
		temp   = PtrToArr1[i];
		PtrToArr1[i] = PtrToArr2[i];
		PtrToArr2[i] = temp;
	}

}
