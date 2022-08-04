#include <stdio.h>
#include <stdlib.h>

void FirstRepeatedElement(char* string)
{
	int count[256]={0};
	for (int i = 0; ; i++)
		{
			count[string[i]]++;
			if(count[	[i]] == 2)
			{
				printf("The index of the first repeated character in the string is %d\n",i);
				return string[i];
			}	
		}
 }

int main() {

	char string[]= "magdy is an engineer and wants to work in amazon";
	//int size = sizeof(arr)/ sizeof(char);
	char character = FirstRepeatedElement(string );
	 printf("The most repeated character in the string is : %c \n",character);
		return 0;
}