#include <iostream>

int main()
{
	int indata = 0;

	std::cout << "input : ";
	std::cin >> indata;

	//indata += 100;
	int&& ref = indata + 100;			// && : r-value 참조
										//r - value 참조는 임시 객체를 참조할 때 사용
	// const int& ref = indata + 100;	// const r-value 참조
										// const r-value 참조는 임시 객체를 참조할 때 사용
										// 상수를 참조 = 값을 변경할 수 없다 (읽기 전용)

	std::cout << ref << std::endl;

	return 0;
}