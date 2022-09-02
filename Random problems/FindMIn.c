# include <stdio.h>
float  FindMin(float Array[] , int length) ; 
int main (void)
{
	//int MyArray[] = {4,5,6,3,2,8,12,87,15};
	float array[] = {10,12.5,15.4,45.8,478.2,36.36,4.56,87.5};
	
	float  Min1  = FindMin(array , sizeof(array)/ sizeof(float));
	//float Min2 ;  
	printf("The minimum1 is :%.1f ", Min1);

	return 0 ; 
}

float FindMin(float  Array[] , int length)
	{
	
		float Min = Array[0];
		for (int i = 1 ; i < length ; i++ )
			if (Min > Array[i]) 	Min = Array[i];
		return Min ; 
	}



