#include <iostream>
using namespace std;
int main()
{
	float rupees , paisas , ans  ;
	cout <<"Enter your rupees  " ; 
	cin >> rupees ;
	cout <<"Enter your paisas  " ; 
	cin >> paisas ;
	// expression 
	// combinition of operators and operands 	
	ans = rupees + paisas/100 ;
	
	cout << "Total rupees are ... "<< ans ;
	
	return 0;
}
