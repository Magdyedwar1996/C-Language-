#include<stdio.h>
int SumOfArray(int*PtrToArr,int LenghtOfArray);
void main(void)
{
	int arr[5];
	char i=0;
	int Sum=0;
	for(i=0;i<5;i++)
	{
		printf("Please enter the element number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	Sum=SumOfArray(arr,5);
	printf("The sum=%d",Sum);
	
}
int SumOfArray(int*PtrToArr,int LenghtOfArray)
{
	int SumOfArr=0;
	int i;
		for(i=0;i<LenghtOfArray;i++)
	{
		//Sum=Sum+PtrToArr[i];
		SumOfArr=SumOfArr+(*(PtrToArr+i));
	}
	return SumOfArr;
}