
#include "stdafx.h"//为什么这一段放最前面？因为它前面的代码都将被忽略
#include <iostream>
/*
第一章的内容主要有以下几个
1.输入输出 也就是CIN和COUT
2.注释用法，不解释
3.流程控制 ，也就是IF/while/case switch/for循环这些
4.类的使用
*/
int chapter1() {
	using namespace std;
	int inputvalue, realvalue;
	cin >> inputvalue;
	if (inputvalue > 0) {
		realvalue = inputvalue;
	}
	else realvalue = inputvalue * -1;
	cout << realvalue<<endl;
	//以上这一段是if语句用使用练习，平时脚本使用多了就会有忘记基本语法的问题
	int forresult= 0;//因为在下面要使用，所以这里就赋了初值，不然会报错uninitialized local variable,局部变量不会自动赋初值 ，不同于全局变量
	for (int i = 1; i < 100; i++) {

		forresult += i;
	}
	cout << forresult << endl;
	cout << realvalue << endl;
	switch (realvalue) {
	case 0:
	{
		cout << "Zero is inputted" << endl;
		break;
	}
	case 1:
	{
		cout << "It's the one" << endl;
		break;

	}
	default://惯性地认为不需要这个default,然而实际上是需要的，不然下面的语句就完全不会被执行
			//case 并不能使用区间判断 ，但可以间接地定义比较,a="1-100"或"101-200",用case "1-100"来判断 。
	cout << "Others" << endl;
	}

	return 0;
};
//The Class related will leave to Chapter2