#include <iostream>
using namespace std;

/*
함수 오버로딩 중, 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때,
입력없는 함수 호출시 문제가 발생한다.
*/

int func(int n = 0) {
	return pow(n, 2);
}

int func() {
	return 10;
}

int main() {
	cout << func(10) << endl;
	cout << func() << endl;
	return 0;
}