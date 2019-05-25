#include "stdafx.h"
#include <iostream>

using namespace std;
/*This Chapter Inlcude
1.	Variable and Basic Types
2.	Strings, Vectors, Arrays(Vectors is the weakness point)
3.	Expressions and Statements
4.	Functions
5.	Classes (It's the point)
*/
//part 1
//basic types:bool ,char,w-,-t,short,int,long,long long,float,double,long double
int chapter2_1(){
	unsigned u = 10;
	int i = -42;//42 is a literal ,the minus sign is just a operand
	cout << i + i << " " << u + i << " "<<(int)u+i<<" "<<u+(unsigned)i<<endl;//the feature of type convert(see what happens when convert a negative value to unsigned)
	cout << u - i << endl;//minus a negative value will make it work
	cout << -i << endl;


	//backslash related symbol
	cout << "\n"<<endl<<"\v"<<endl<<"\\\r\t\?" << endl<<'\t'<<endl;
	//backslash realted 3 num
	cout << '\23' << endl << "\x12 3232\2323\115" << endl;
	return 0;
};