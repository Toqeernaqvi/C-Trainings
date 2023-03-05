#include <iostream>
using namespace std;
int main()
{
	int r1, p1, r2 ,p2 , r , p ,rem ,q  ;
	cout <<"Enter first  rupess  " ; cin >> r1 ;
	cout <<"Enter first  paisas  " ; cin >> p1 ;
	cout <<"Enter second rupess  " ; cin >> r2 ;
	cout <<"Enter second paisas  " ; cin >> p2 ;
	if ( p1 >= p2 )
		p = p1 - p2 ;
	else
	{
		p = 100 + p1 -p2 ;
		r1 -- ;	// aik km kr rha hai
	}
	if (r1 >= r2)
	
	{
		r= r1- r2 ;	
		cout << "Total rupees are ... "<< r <<endl;
		cout << "Total paisas are ... "<< p <<endl;	
	}
	else
		cout << " subtraction is not possible " ;		
		
return 0;
}
