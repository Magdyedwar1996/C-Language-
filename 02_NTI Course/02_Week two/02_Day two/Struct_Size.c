// this is the first lab 
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
typedef struct {
	u64   t ; 
	u16  x ; 
	u32  y ; 
	u16  z ; 
	u32  k ; 
	
	
} magdy ;

typedef struct {
	u16  x ; 
	u16  z ; 
	u32  k ; 
	u32  y ; 
	
	
} merna;

typedef struct {
	
	u32  k ; 
	u32  y ; 
	u16  z ; 
	u16  x ; 
	
	
	
} mark ;


void main()
{
	printf("The size of the struct is : %d\n",sizeof(magdy));
	printf("The size of the struct is : %d\n",sizeof(merna));
	printf("The size of the struct is : %d\n",sizeof(mark));

	
}
