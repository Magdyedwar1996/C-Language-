#include<stdio.h>
char *getString()
{
	char str[] = "Will I be printed?";
	return str;
}

int main()
{
	printf("%s", getString());
	getchar();
}
/*
The above program doesn’t work because array variables are 
stored in Stack Section. So, when getString returns values
 at str are deleted and str becomes dangling pointer.
 */