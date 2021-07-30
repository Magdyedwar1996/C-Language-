/*
(4) C function to get the value of the smallest element in array
using pointers
*/

#include <stdio.h>
#define ArraySize   10

void GetTheSmallestElement(int *PtrToArr1, int length);

int arr[ArraySize];
     int min = 65352  ;
	 
void main ()
{
	printf("Enter the values of the array : \n");
	// taking the elements of the array from the user
	for (int  i = 0 ; i < ArraySize ; i++)
	{
		printf("%d-Element %d : ",i+1, i);
		scanf("%d",&arr[i]);
		//printf("\n");
	}
	GetTheSmallestElement(arr , ArraySize );
	printf("The smallest element is : %d",min);	
}

//////////////////////////////////////////////

void GetTheSmallestElement(int *PtrToArr1, int length)
{
	
	for ( int i  = 0 ; i < length; i++)
	{
		if(PtrToArr1[i]< min)
			min = PtrToArr1[i];
	}
}
