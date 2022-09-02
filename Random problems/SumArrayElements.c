# include <stdio.h>
int  SumArrayElements(int array[], int length) ; 
int main (void)
{

int sum ; 
int array[] = {10,20,50,40,50,60,70,80,100,120};
sum = SumArrayElements(array, sizeof(array)/ sizeof(int));
printf("The sum is : %d", sum);

	return 0 ; 
}

int   SumArrayElements(int array[], int length) 

{
	int sum = 0  ; 
	for(int i = 0 ; i < length ; i++)
		{
			sum += array[i];	
		}
		
	return sum ; 	
		
}




