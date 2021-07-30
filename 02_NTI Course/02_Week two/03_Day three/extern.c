#include<stdio.h>
//Access data beyond its life time
int* fun()
{
    int data;
    int *ptr = &data;
    *ptr  = 5;
    return ptr;
}
int main()
{
    int *ptr = fun();
    
   //Behavior is undefined
    printf("%d\n",*ptr);
    return 0;
}