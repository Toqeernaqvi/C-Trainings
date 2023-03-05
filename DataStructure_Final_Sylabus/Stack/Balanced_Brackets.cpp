#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std ;
int main ()
{
char str[100];//char array
cout<<"Enter any expression :  ";
cin.getline(str,100);
//char str []="[x+{(y-z)*(a+b)}-w]";
int x =0  , length , square_bracket, curly_bracket, pranthesis ;
square_bracket= curly_bracket= pranthesis =0;//
length  = strlen(str);
while (x<length) // while (str[x] != NULL)
{
	if      ( str[x] == '[') square_bracket ++ ;
	else if ( str[x] == '{') curly_bracket  ++ ;
	else if ( str[x] == '(') pranthesis     ++ ;
	else if ( str[x] == ']') square_bracket -- ;
	else if ( str[x] == '}') curly_bracket  -- ;
	else if ( str[x] == ')') pranthesis     -- ;
	x++;//loop
}
	if (square_bracket== 0 && 
	    curly_bracket == 0 &&
	    pranthesis    == 0     )
		cout << "Valid expression regarding brackets";
	else 
		cout << "inValid expression regarding brackets";
}
