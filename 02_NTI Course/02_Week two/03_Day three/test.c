#include <stdio.h>
union a 
{
 unsigned char x    ; 
	int y  ; 

};

typedef enum { 
	True = 1,
	False = 0 
	
} bool ; 

// this is the function 
bool func(int x)
{
	
	if (x> 0)
		return True;
	else 
		return False;
}


void  main ()
{
union a w ; 
w.x = 20 ;
w.y = 1000;
printf("the value of x is : %d\n",w.x);
printf("Enter a number : ");
int y ;
scanf("%d",&y);
int t = func(y);
printf("The value of t is : %d",t);	
	
}
