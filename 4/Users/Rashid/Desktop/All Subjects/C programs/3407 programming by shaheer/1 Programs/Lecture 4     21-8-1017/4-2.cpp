#include <iostream>
using namespace std;
int main()
{
	int marks  ;
	cout <<"Enter your marks     " ; cin >> marks ;
	if (marks>=80)
		cout << "A grade" ;	
	else if (marks>=70)
		cout << "b grade" ;	
	else if (marks>=60)
		cout << "c grade" ;	
	else if (marks>=50)
		cout << "d grade" ;	
	else
		cout << "F" ;
		
return 0;
}
