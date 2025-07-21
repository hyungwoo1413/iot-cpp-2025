#include <iostream>

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main()
{
	std::cout << add(10, 20) << std::endl;
	std::cout << add(10.1, 20.2) << std::endl;	// 실인자를 자동으로 형변환해줌

	return 0;
}