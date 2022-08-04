#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
// 1- fixing the double quotations " "
// 2- changing the d(int) specifier to f(double) specifier
// 3- fixing the equation that calculates the volume of the sphere 
 double  radius;
 printf("Enter radius:");
 scanf("%f", &radius);
printf("volume is : %lf \n\n", (4.00/3)*(radius*radius*radius)*PI);
return 0;
}