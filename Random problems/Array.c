# include <stdio.h>
# include <conio.h>

int  main(void)
{
	 int i = 0;
	int A[5];
	A[0] = 27 ; 
	A[1] = 29 ; 
	A[2] = 30 ; 
	A[3] = 40 ; 
	A[4] = 45 ; 
	for ( ; i < sizeof(A)/4 ;i++)
		printf("Element %d : %d \n",i , A[i]);
	
	
	
return 0 ; 
}
