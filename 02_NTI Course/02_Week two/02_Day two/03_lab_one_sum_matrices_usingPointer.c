// 2 array each one is 3*3*3
// find the summation of the two arrays

#include<stdio.h>
void SumTwoArray(int * PtrToArray1 ,int * PtrToArray2 , int * PtrToArray3 );

void main()
{
	int array1[3][3]= {{1,2,3},{4,5,6},{7,8 ,9}};
	int array2[3][3]= {{10,20,30},{40,50,60},{70,80 ,90}};
	int array3[3][3];
	SumTwoArray(array1,array2 ,array3  );



	for (int i = 0 ; i< 3; i++)
		for (int j = 0 ; j< 3 ;j++)
		{
			printf("%d",array3[i][j]);
		}
		
	
}

void SumTwoArray(int* PtrToArray1[] ,int* PtrToArray2[] , int * PtrToArray3[] )
{
	for (int i = 0 ; i<3; i++)
	{
		for (int j = 0 ; j<3; j++)
	{
		PtrToArray3[i][j]= PtrToArray1[i][j]+PtrToArray2[i][j];
		
	}
	
	
	
	
}