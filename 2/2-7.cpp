#include <iostream>
using namespace std;
int main()
{
	int r1, p1, r2 ,p2 , r , p ,rem ,q  ;
	cout <<"Enter first  rupess  " ; cin >> r1 ;
	cout <<"Enter first  paisas  " ; cin >> p1 ;
	cout <<"Enter second rupess  " ; cin >> r2 ;
	cout <<"Enter second paisas  " ; cin >> p2 ;
	
	p = p1 + p2 ;
	r = r1 + r2 ;
	if (p >= 100)
	{
		rem = p % 100 ; //
		q   = p / 100 ;
		p = rem ;
		r = r+  q ;
	}
	cout << "Total rupees are ... "<< r <<endl;
	cout << "Total paisas are ... "<< p <<endl;	
	return 0;
}
