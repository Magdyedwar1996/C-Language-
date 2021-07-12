#include <stdio.h>

int main()
{
	char arr[]= "magdy";
	char  *ptr = arr;
	char array[3];
	
	for (int i =0 ; i < sizeof(arr);i++)
	{
		
		if (ptr[i]=='\0')
		{
			array[0] = arr[i-1];
			array[1] = ' ';
			array[2] = arr[i-2];
		}
		
	}
	
		printf("%c%c%c", array[0],array[1],array[2] );
	
	
	
}