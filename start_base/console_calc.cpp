#include "console_calc.h"
#include <iostream>

using namespace std;

void console_calc::console_square()
{
	int nVal = 0;

	cout << "�������� ���� ���� �Է����ּ��� : ";
	cin >> nVal;
	cout << nVal * nVal << endl;
}

void console_calc::console_plus()
{
	int nVal = 0, mVal = 0;

	cout << "���� ù��° ���� �Է��ϼ��� : ";
	cin >> nVal;
	cout << "���� �ι�° ���� �Է��ϼ��� : ";
	cin >> mVal;
	cout << "����� " << nVal + mVal << "�Դϴ�." << endl;
}
