// C Function to read 10 integers into an array from user and
// print them in reversing order using pointers
#include <stdio.h>
#define SIZE  10 
void Reverse_Array(int *PtrToArray);
void main (void)
{
	int Array[SIZE];
	
	printf("Enter ten elements : ");
	for (int i = 0; i<SIZE ; i++)
	{
		scanf("%d",Array+i);
	}
	///////////////////////////////////////////////////
	printf("The original array is : \n ");
	for (int i = 0 ; i<SIZE;i++)
	{
		printf("%d\n",(*(Array + i )));
	}
	///////////////////////////////////////////////////
	 Reverse_Array(Array);
    //////////////////////////////////////////////////
	printf("The reversed array is : \n ");
	for (int i = 0 ; i<SIZE;i++)
	{
		printf("%d\n",(*Array + i ));
	}	
	
}

void Reverse_Array(int *PtrToArray)
{
	for (int i = SIZE ; i> 0 ; i--)
	{
		int temp = PtrToArray[i]; 
		PtrToArray[i]=PtrToArray[SIZE-i-1]; 
		PtrToArray[SIZE-i-1] = temp ; 
	}
}







