#include<iostream>
using namespace std ;
int main ()
{// array is combinition of same data type
	// having smae name but different index
	// array is assigned consective memory
	int  a[5] = { 31, 54, 77, 52, 93 };
	int  *p = &a[5] ;
	for(int j=0; j<5; j++) //for each element,
	cout << "value is  " << p[j] <<  endl;
	return 0;
}












