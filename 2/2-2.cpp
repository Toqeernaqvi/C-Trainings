#include <iostream>
using namespace std;
int main()
{
	// program to convert forenhight to celcius 
	float	c , f    ;
	cout << "Enter the value of F";
	cin  >> f;
	
	c =  (f-32 ) * (float( 5) / float (9 ) ); // precedence 
	 
	 cout << c  << endl ;
	
	
	
	return 0;
}
