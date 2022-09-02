#include<stdio.h>

int main(void)
{
	
	FILE  *ptr ; // this is a file pointer 
	char c ; 
	/*
	this line of code to open the file itself
	with read mode and make the pointer point to it
	*/
	//ptr = fopen(__FILE__ , "r"); 
	ptr = fopen("magdy.txt" , "r"); // this line to read any other file 
	
	/*
	this line means while the character that the pointer gets is not equal to 
	 End of file;
	 continue to read the characters from the file
	 */
	 
	while ((c = getc(ptr)) != EOF )
	putchar(c); 
	
	
	
	return 0 ; 
}