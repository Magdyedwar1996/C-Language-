# include <iostream>
# include <stdlib.h>
 
using namespace std; 

int main(void)
{
    int A[5] = {2,4,6,8,10};
    
    int *ptr ; 
    ptr = A ;
    for (int i = 0 ; i<5 ; i++)
    	cout<< i << " -->> Element is :"<<ptr[i]<<endl;
    
	printf("\n\n\n");	
    int *ptr1;
	ptr1 = (int *)malloc(5 *sizeof(int));
	ptr1[0] = 5 ; 
	ptr1[1] = 10 ;
	ptr1[2] = 15 ;
	ptr1[3] = 25 ;
	ptr1[4] = 30 ;	
	
	for (int j =0 ; j<5 ; j++)
		{
		printf("%d\n",ptr1[j]);
		}
		
	free(ptr1);	

    
    return 0 ; 
}
