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
	cout << '\23' << endl << "\x12 3232\2323\115\1111" << endl;


	//initiate
	int unit_sold{ 0 };
	int unit_sold2(0);
	cout << unit_sold << "and" << unit_sold2 << endl;
	double wage;
	double salary = wage = 99.9999;




	return 0;
};

//the difference between declaration and definition,
extern int ext_i;
int normal_i;

int chapter2_2() {
	cout << ext_i << endl;
	int ext_i = 200;
	cout << ext_i << endl;//the deference between global variable and local one,
	return 0;
}

int chapter2_3() {
	int ival = 1024;
	int& refval = ival,refval2=200;//the basic reference, take it as a alias
	int* pval = &refval, val3 = 300;//the pointer,remember the * combine with variable ,not type
	*pval = 2038;
	cout << ival << endl << refval << endl;
	cout << refval2 << endl;
	cout << *pval << endl;
	cout << val3 << endl;
	int* newc11p = nullptr;
	newc11p = pval;//the line make sure this pointer defined correctly
	cout << *newc11p << endl;//a error will be thrown when running(if the line ahead was not exist)
	//there is also a void type pointer,which was only used as an address
	void* voidp = pval;
	//int* newintp = voidp; so this cannot be done,once void ,always void.

	return 0;
}