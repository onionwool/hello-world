#include <iostream>
#include "console_calc.h"

//using std::cout;
//using std::cin;
//using std::endl;
using namespace std; // 위와 아래와 동일

int main()
{
	cout << "Hello World!" << endl; // 동일
	cout << "Hello " << "World!" << endl; // 동일
	cout << "Hello ";
	cout << "World!" << endl; // 동일
	
	console_calc::console_plus(); // 두값 더하기
	console_calc::console_square(); // 값 제곱하기

	return 0;
}
