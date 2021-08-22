#include <stdio.h>
#include <stdlib.h>

int MostRepeatedElement(int* array ,int  size)
{
	int max = 0 , element; 
	
	for (int i= 0; i < size; i++)
		{
			int count = 0 ;
			while(array[i]==array[i+1])
				{
					count++;
					i++;
				}
			
			if (count > max)
				{
					max = count ; 
					element = array[i];
				}	
		}
    printf("The most repeated element in the array repeated %d times\n",max);
    return element ; 
}

int main() {

	int arr[]= {1,2,3,4,4,4,6,7,7,9,9,12,15,15,15,15 ,15 , 15,20,20,20,20 , 20};
	int size = sizeof(arr)/ sizeof(int);
	int element = MostRepeatedElement(arr , size);
	 printf("The most repeated element in the array is : %d\n",element);
		return 0;
}