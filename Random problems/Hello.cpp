# include <iostream>
 
using namespace std; 

struct card
{
	int face; 
	int shape ; 
	int color ; 
};

int main(void)
{
	struct card array[10];
	cout << "The size of array is :"<<sizeof(array)<<endl;
	array[0]= {1,2,3};
	array[1]= {4,5,6};
	array[2]= {7,8,9};
	array[3]= {10,11,12};
	array[2].face = 100;
	cout << "The face of the third struct is :"<< array[2].face<<endl;
    
    return 0 ; 
}
