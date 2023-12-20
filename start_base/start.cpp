#include <iostream>

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

	int nVal = 0;

	cout << "제곱으로 만들 값을 입력해주세요 : ";
	cin >> nVal;
	cout << nVal * nVal << endl;

	return 0;
}