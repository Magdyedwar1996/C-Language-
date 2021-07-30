/*
C function to copy all elements of an array into another
array using pointers. The two arrays have the same length and
types.
*/
#include <stdio.h>
#define ArraySize   10 

void CopyArray(int *PtrToArr1 , int *PtrToArr2, int length);

int arr1[ArraySize];
int arr2[ArraySize];
void main ()
{	
	printf("Enter the values of the array \n ");
	for (int  i = 0 ; i < ArraySize ; i++)
	{
		printf("%d-Element %d : ",i+1, i);
		scanf("%d",&arr1[i]);
		printf("\n");
	}
	
	printf("The original array : \n");
	for (int  i = 0 ; i < ArraySize;  i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n////////////////////\n");
	///////////////////////////
	CopyArray(arr1 , arr2, ArraySize);
    ////////////////////////////////
	
	printf("The copied array : \n");
	for (int  i = 0 ; i < ArraySize ; i++)
	{
		printf("%d ",arr1[i]);
	}

}


void CopyArray(int *PtrToArr1 , int *PtrToArr2, int length)
{
	for (int i = 0 ; i < length; i++)
		PtrToArr2[i]= PtrToArr1[i];
	
	
}