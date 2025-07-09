#include <iostream>

//int add(int a, int b)
//{
//	return a + b;
//}
//
//double add(double a, double b)
//{
//	return a + b;
//}

template <typename T>	// 타입에 상관없이 같은 로직을 재사용

T add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << add(3, 4) << std::endl;

	std::cout << add(3.3, 4.4) << std::endl;	// 정수 7이 출력

	return 0;
}