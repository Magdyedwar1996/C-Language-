# include <iostream>
using namespace std; 

void swap(int &x , int &y )
{
	int temp ; 
	temp = x  ; 
	x = y ;
	y = temp ;  
		
}
int main(void)
{
	int num1 =10 , num2 = 20; 
	swap(num1 , num2);
	cout<<"num1 is :"<<num1<<endl; 
	cout << "num2 is :" <<num2<<endl;
	
	return 0 ; 
	
}
