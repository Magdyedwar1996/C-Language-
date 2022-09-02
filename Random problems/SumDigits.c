# include <stdio.h>
int FindSumOfDigits(int number) ; 
int main (void)
{
 
	while (1)
	{
		int number ; 
		printf("Enter the number you want to sum : ");
		scanf("%d",&number);
		if(number == -1 )
			break ; 
		int output = FindSumOfDigits(number);
		printf("The sum is %d\n", output);

	}
	return 0 ; 
}

int FindSumOfDigits(int number)
	{
	int sum  , result ; 
	while(number%10 != 0 )
		{ 
			sum = sum + number %10 ;
			number /= 10 ; 
		}

		return sum ; 
	}



