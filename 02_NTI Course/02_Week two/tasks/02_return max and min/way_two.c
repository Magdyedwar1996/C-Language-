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
		printf("The max is : %d\n",ptr[1]);
		printf("The min is : %d\n",ptr[0]);
		
}
int (*GetMax_Min(int *ptr))[2]
{	
	//static int arr[2];
	// static to make the lifetime of the  local variable
	// throughout the entire program.
	for (int i=0; i<SIZE;i++)
		{
			for (int j=1 ; j<SIZE-i;j++ )
			if (arr[i] < arr[j])
			{
				int temp = ptr[i];
				ptr[i]   = ptr[j] ; 
				ptr[j]  = temp ; 
			}
			
		}
		
		
	static int (*PTR)[2] = {ptr[0],ptr[SIZE-1]} ;	
	
	return PTR ; 
	
	
}

