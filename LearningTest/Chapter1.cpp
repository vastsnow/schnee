
#include "stdafx.h"//Ϊʲô��һ�η���ǰ�棿��Ϊ��ǰ��Ĵ��붼��������
#include <iostream>
/*
��һ�µ�������Ҫ�����¼���
1.������� Ҳ����CIN��COUT
2.ע���÷���������
3.���̿��� ��Ҳ����IF/while/case switch/forѭ����Щ
4.���ʹ��
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
	//������һ����if�����ʹ����ϰ��ƽʱ�ű�ʹ�ö��˾ͻ������ǻ����﷨������
	int forresult= 0;//��Ϊ������Ҫʹ�ã���������͸��˳�ֵ����Ȼ�ᱨ��uninitialized local variable,�ֲ����������Զ�����ֵ ����ͬ��ȫ�ֱ���
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
	default://���Ե���Ϊ����Ҫ���default,Ȼ��ʵ��������Ҫ�ģ���Ȼ�����������ȫ���ᱻִ��
			//case ������ʹ�������ж� �������Լ�ӵض���Ƚ�,a="1-100"��"101-200",��case "1-100"���ж� ��
	cout << "Others" << endl;
	}

	return 0;
};
//The Class related will leave to Chapter2