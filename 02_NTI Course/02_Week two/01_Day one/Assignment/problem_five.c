/*
C function to copy all elements of an array into another
array using pointers. The two arrays have the same length and
types.
*/
void CopyArray(int *PtrToArr1 , int *PtrToArr2, int length);
#include <stdio.h>
void main ()
{
	int arr1[];
	int arr2[];
	
	printf("Enter the length of the array : ");
	scanf("%d",&length);
	printf("Enter the values of the array : ");
	for (int  i = 0 ; i < length ; i++)
	{
		scanf("%d",arr[i]);
	}
	
	printf("The original array : \n");
	for (int  i = 0 ; i < length ; i++)
	{
		printf("%d",arr[i]);
	}
	
	///////////////////////////
	CopyArray(arr1 , arr2,length);
    ////////////////////////////////
	
	printf("The copied array : \n");
	for (int  i = 0 ; i < length ; i++)
	{
		printf("%d",arr[i]);
	}

}


void CopyArray(int *PtrToArr1 , int *PtrToArr2, int length)
{
	for (int i = 0 ; i<length; i++)
		PtrToArr2[i]= PtrToArr1[i];
	
	
}