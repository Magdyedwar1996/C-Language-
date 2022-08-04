// function that returns Max and Min
#include <stdio.h>
#define   SIZE      10 
int (*PtrToArray)[SIZE];
int (*GetMax_Min(int *ptr))[2];
void main ()
{
	int array[SIZE] ;
	printf("Enter ten values : ");
	for (int i=0;i<SIZE ; i++)
		{
			printf("%d-Element %d : ",i+1 , i);
			scanf("%d",&array[i]);
		}
		
		int *ptr = GetMax_Min(array);
		printf("The max is : %d\n",ptr[0]);
		printf("The min is : %d\n",ptr[1]);
		
}
int (*GetMax_Min(int *ptr))[2]
{	
	static int arr[2]={0,56210};// static to make the lifetime of the  local variable
	//static int (*PTR)[2] = &arr ; 					   // throughout the entire program.
	for (int i=0; i<SIZE;i++)
		{
			if (ptr[i] > arr[0])
				arr[0]= ptr[i];
			
			if (ptr[i]< arr[1])
				arr[1]= ptr[i];
		}
	
	return arr ; 
	
	
}

