#include<stdio.h>
int main()
{
int n; // initializing a variable
// this line goes in infinite loop as n is never zero
for(n = 7; n!=0; n--)
	printf("n = %d", n--);
getchar();
return 0;
}
