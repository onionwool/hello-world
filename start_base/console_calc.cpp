#include "console_calc.h"
#include <iostream>

using namespace std;

void console_calc::console_square()
{
	int nVal = 0;

	cout << "제곱으로 만들 값을 입력해주세요 : ";
	cin >> nVal;
	cout << nVal * nVal << endl;
}

void console_calc::console_plus()
{
	int nVal = 0, mVal = 0;

	cout << "더할 첫번째 값을 입력하세요 : ";
	cin >> nVal;
	cout << "더할 두번째 값을 입력하세요 : ";
	cin >> mVal;
	cout << "결과는 " << nVal + mVal << "입니다." << endl;
}
