#include <iostream>
#include "console_calc.h"

//using std::cout;
//using std::cin;
//using std::endl;
using namespace std; // ���� �Ʒ��� ����

int main()
{
	cout << "Hello World!" << endl; // ����
	cout << "Hello " << "World!" << endl; // ����
	cout << "Hello ";
	cout << "World!" << endl; // ����
	
	console_calc::console_plus(); // �ΰ� ���ϱ�
	console_calc::console_square(); // �� �����ϱ�

	return 0;
}
