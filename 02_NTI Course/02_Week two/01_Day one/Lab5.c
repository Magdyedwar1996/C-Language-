#include<stdio.h>
void GetMaxMin(int*PtrToArr,int Length, int *PtrToMax,int *PtrToMin );
void main(void)
{
	int arr[5]={0};
	char i=0;
	int Max,Min;
	for(i=0;i<5;i++)
	{
		printf("Please enter the element number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	GetMaxMin(arr,5,&Max,&Min);
	printf("The maximum element=%d\n",Max);
	printf("The minimum element=%d",Min);
}
void GetMaxMin(int*PtrToArr,int Length, int *PtrToMax,int *PtrToMin )
{
	char i;
	*PtrToMax=PtrToArr[0];
	*PtrToMin=PtrToArr[0];
	for(i=0;i<Length;i++)
	{
		if (PtrToArr[i]>*PtrToMax)
		{
			*PtrToMax=PtrToArr[i];
		}
		else if (PtrToArr[i]<*PtrToMin)
		{
			*PtrToMin=PtrToArr[i];
		}
		else
		{
			/*No code*/
		}
	}
}