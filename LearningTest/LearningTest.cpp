// LearningTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	double dval=3.14;
	const int &ri=dval;
	std::cout<<ri<<std::endl;
	system("pause");
	return 0;
}

