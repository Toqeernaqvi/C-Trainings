#include<iostream>
using namespace std ;
int main ()
{// array is combinition of same data type 
	// having smae name but different index 
	// array is assigned consective memory 
	int  a[5] = { 31, 54, 77, 52, 93 };
	for(int j=0; j<50; j++) //for each element,
	cout << "value is  " << a[j] << "  Address is " <<&a[j]<< endl; 
	return 0;
}












