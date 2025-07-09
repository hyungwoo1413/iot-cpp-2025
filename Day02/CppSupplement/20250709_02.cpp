#include <iostream>

void func(int& arg)		// 매개변수 int에 대한 참조
{
	arg += 100;			// 원본의 값이 변경된다
}

int main()
{
	int num = 1;
	func(num);

	std::cout << num << std::endl;

	return 0;
}