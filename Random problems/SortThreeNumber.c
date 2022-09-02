# include <stdio.h>
void  SortThreeNumers(int n1, int n2, int n3) ; 
int main (void)
{
 
 int n1 , n2 , n3 ; 
 printf("Enter three numbers : ");
 scanf("%d",&n1 ); 
 scanf("%d",&n2);
 scanf("%d",&n3);
 
 SortThreeNumers(n1 , n2 , n3 );
	return 0 ; 
}

void  SortThreeNumers(int n1, int n2, int n3) 
	{
		int lowest , middle , highest ; 
		if (n1>= n2 && n1 >= n3)
			{
				highest = n1 ; 
				if(n2>n3)
					{
						middle = n2 ; 
						lowest = n3 ; 
						}	
				else 
					{
						middle = n3 ; 
						lowest = n2 ; 
						}	
				
			}
		
		else if (n2>=n1 && n2>=n3)
		{
			highest =  n2 ; 
			if ( n1>n3)
					{
						middle  = n1 ; 
						lowest = n3 ; 
						
					}
				else 
					{
						middle = n3 ; 
						lowest = n1 ; 
						
					}
			
		}
		
		else 
		{
			highest = n3 ; 
			if(n1 > n2 )
			{
				middle = n1; 
				lowest = n2; 
			}
		}
		
		printf("The highest is %d\n",highest);
		printf("The middle is %d\n",middle);
		printf("The lowest is %d\n",lowest);
		printf("Desecening : %d %d %d ",highest , middle , lowest);
		printf("Ascending  : %d %d %d ", lowest, middle , highest );
		 
		
		
		
}




