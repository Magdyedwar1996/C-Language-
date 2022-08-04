# include <iostream>

using namespace std; 

int  main(void)
{
	
	int a = 10 ; 
	int &r = a ; 
	cout << a << r <<endl;
	int b = 30 ; 
	r = b; 
	cout << a <<b<<r <<endl; 
	
	return 0 ; 
}
