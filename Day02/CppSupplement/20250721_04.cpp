#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10, 20, 30, 40, 50 };

	std::vector<int>::reverse_iterator rit;
	// 역순환시 rbegin(), rend() 사용
	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		std::cout << *rit << std::endl;
	}

	return 0;
}