// LearningTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Chapterlist.h"
//int chapter1();//在这里声明，有外部定义，可能更常用的办法是单独链接到一个头文件，后面会尝试使用这种方式 05/24/2019 Jacksonville
//Will try to write comments in English,As frequently troubled by Chinese punctuation

using namespace std;
int ext_i = 100;
int _tmain(int argc, _TCHAR* argv[])
{
	
	cout << "Hello World!" << endl;
	//chapter1(); acomplished
	//chapter2_1();accomplished
	//chapter2_2();accomplished
	chapter2_3();
	//cout << ext_i << endl;//compare with the local variable in chapter2_2()
	system("pause");
	return 0;
}


