#include<iostream>
using namespace std ;

int main ()
{  // pointer is a variable which holds the address
   // of another variable.
	int x = 10  ;
	int *y       ;
	   y =  &x  ;
	
	cout << "value of x   " <<  x  << endl ;
	cout << "address of x " << &x  << endl ;
	cout << "value of y   " <<  y  << endl ;
	cout << "content of y " << *y  << endl ;
	cout << "address of y " << &y  << endl ;
	
}












