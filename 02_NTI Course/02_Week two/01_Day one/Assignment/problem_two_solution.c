//C Function to find length of a given string using pointer
#include <stdio.h>
//# define NULL '\0'
//#define SIZE    1000 
int Total_Length = 0 ;
char * PtrToArray ; 
int FindLengthOfArray(char * PtrToArray);
void main (void )
{
	char arr[] = "I am magdy edwar"  ;
	
	printf("The length of the string is :%d ", FindLengthOfArray(arr));
	
	
}

int FindLengthOfArray(char * PtrToArray)
	{

		while( PtrToArray[Total_Length] != '\0')
		{
			
			 Total_Length += 1 ;			 
		}
		return Total_Length ; 
	
	
	
	}

