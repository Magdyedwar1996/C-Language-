#include <iostream>
#include <stdlib.h>
using namespace std; 
void FunPrint(int A[], int ArraySize) ; 
int * ReserveSize(int n);

int main(void)
{
	
	ReserveSize(5);
	
	//int array[] = {10,20,30,40,50};
	//FunPrint(array, 5);	
	return 0 ; 
}

int * ReserveSize(int n)
{

	int *p = (int*)malloc(n * sizeof(int));
	return p ; 	
}

void FunPrint(int A[], int ArraySize)
{
	
for (int iterator =0 ; iterator <ArraySize ; iterator++)
	printf("The %d element of the array is :%d\n",iterator, A[iterator]);	
}
