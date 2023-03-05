#include<iostream>
using namespace std ;
// passing arguments by value 
void convert( int y )
{
	y  ++  ;
	cout << "value of y   in funcation call    " << y  << endl ;
}
int main ()
{
	int y = 4 ;
	cout << "value of y before funcation call  " << y  << endl ;
	convert (y);	
	cout << "value of y after funcation call   " << y  << endl ;
	
}












