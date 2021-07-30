#include <stdio.h>

typedef struct 
{ 
	char ID ; 
	char Math ;
	char Language ; 
	char physics ; 
	char Chemistry ; 
		
} Students_Grds ;



void main()
{
	Students_Grds Students_IDs[10] = 
	{
		{ 1 , 78 , 14 , 95 , 96 },
		{ 2 , 78 , 89 , 58 , 58 },
		{ 3 , 58 , 11 , 79 , 78 },
		{ 4 , 78 , 52 , 95 , 96 },
		{ 5 , 78 ,78  , 58 , 96 },
		{ 6 , 78 , 14 , 58 , 36 },
		{ 7 , 78 , 14 ,12  , 96 },
		{ 8 , 49 , 14 , 58 , 96 },
		{ 9 , 78 , 44 , 58 , 88 },
		{ 10 , 74 , 66 , 58 , 96 }		
	};
	




	int ID ; 
	printf("Enter the ID : ");
	scanf("%d",&ID);
	switch(ID)
	{
		
		case 1 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 
				
		case 2 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is :%d\n",Students_IDs[ID].Language);
				printf("physics Grade is :%d \n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 		
				
		case 3 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is :%d \n",Students_IDs[ID].Chemistry);
				break ; 
				
		case 4 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 
				
		case 5 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is :%d \n",Students_IDs[ID].Chemistry);
				break ; 		
				
				
				
		case 6 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is :%d \n",Students_IDs[ID].Language);
				printf("physics Grade is :%d \n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 		
				
				
		case 7 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is :%d \n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 		
				
		case 8 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is :%d \n",Students_IDs[ID].Chemistry);
				break ; 		
				
				
		case 9 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is : %d\n",Students_IDs[ID].Chemistry);
				break ; 		
				
		case 10 : printf("Math Grade is : %d\n",Students_IDs[ID].Math);
				printf("Language Grade is : %d\n",Students_IDs[ID].Language);
				printf("physics Grade is : %d\n",Students_IDs[ID].physics);
				printf("Chemistry Grade is :%d \n",Students_IDs[ID].Chemistry);
				break ; 		
				
				
				
		 default : printf("Invalid ID \n");
						
				
				
				
				
	}
	
	
	
	
}