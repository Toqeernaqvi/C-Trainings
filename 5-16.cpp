#include <iostream>
using namespace std;
int main()
{	
	float x , sum = 0   ;
//	1/1+1/2+1/3+1/4+ ..... 1/10
	for (x = 1 ; x <= 10 ; x ++ )
	  {
	  	sum += 1/x ;
	  }
		cout << sum << endl ; 
	return 0;
}






