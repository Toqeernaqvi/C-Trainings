#include <iostream>
using namespace std;
int main()
{
	//for (int x = 10 ; x >= 1 ; x -=2 )
	//	cout << x <<  endl ;
	int x = 10 , y = 20  , z ; 
	z =  x++ * y --  ;
	cout << "value of x " << x << endl ;//11
	cout << "value of y " << y << endl ;//19	 
	cout << "Value of z " << z << endl ;//200
return 0;
}




