#include<stdio.h>

void main(void)
{
	int x = 10;
	int * ptr = &x;
	printf("The value of x Before updating=%d\n",x);
	*ptr = 20;
	printf("The value of x After updating=%d",x);
}