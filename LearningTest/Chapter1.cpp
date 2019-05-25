
#include "stdafx.h"//为什么这一段放最前面？因为它前面的代码都将被忽略
#include <iostream>

int chapter1() {
	using namespace std;
	int inputvalue, realvalue;
	cin >> inputvalue;
	if (inputvalue > 1) {
		realvalue = inputvalue;
	}
	else realvalue = inputvalue * -1;
	cout << realvalue;
	return 0;
};