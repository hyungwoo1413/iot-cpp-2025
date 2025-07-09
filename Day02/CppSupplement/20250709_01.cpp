#include <iostream>

int main()
{
	int a = 1;		// a는 int형식에 대한 인스턴스
	std::string strD;

	int b = 10;		// C Style
	int b1(10);		// C++ Style

	int c = a;
	int c1(a);	   
	auto d(c);		// auto 변수명(초기값) 형이 자동 결정

	int n = 10;
	int& ref = n;
	ref = 20;
	std::cout << n << std::endl;

	int* pn = &n;	// 포인터 pn은 n의 주소를 가리킴
	*pn = 30;
	std::cout << n << std::endl;

	return 0;
}