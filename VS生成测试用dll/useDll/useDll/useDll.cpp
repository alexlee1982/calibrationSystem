// useDll.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
__declspec(dllimport) int add(int a, int b);

int main()
{
	int a = 5;
	int b = 7;
	int c;
	cout << "the value is " << add(a, b)<<endl;
	cin >> c;
    return 0;
}

