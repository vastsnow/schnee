
#include "stdafx.h"//Ϊʲô��һ�η���ǰ�棿��Ϊ��ǰ��Ĵ��붼��������
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