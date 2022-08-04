# include <iostream>
# include <stdlib.h>
using namespace std; 
struct Rectangle{
	int length ; 
	int width ; 
};

int main(void)
{
	struct Rectangle R1;
	struct Rectangle *ptr ;
	ptr = &R1;
	///////////////////  
	R1.length = 10 ; 
	R1.width = 20 ;
	////////////////
	(*ptr).length = 100; 
	(*ptr).width = 200; 
	/////////////// 
	ptr->length = 50 ; 
	ptr->width = 25 ; 

    return 0 ; 
}
