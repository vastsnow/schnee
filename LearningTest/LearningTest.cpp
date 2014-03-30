// LearningTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	double pi=3.14;
	double pi2=3.24;
	const double *cptr=&pi;
	double *const pptr=&pi;
	const double *const pptt=&pi;
	cptr=&pi2;
	*pptr=3.15;
//	*pptt=3;
//	pptt=&pi2;
	cout<<*cptr<<endl;
	cout<<*pptr<<endl;
	cout<<pi<<endl;
	int *p1, *const p2;

	system("pause");
	return 0;
}

