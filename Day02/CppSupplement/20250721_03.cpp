#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10, 20, 30, 40, 50 };

	std::vector<int>::iterator itr;		// 순방향 반복자(포인터)

	for (itr = v.begin(); itr != v.end(); itr++) {
		std::cout << *itr << std::endl;
	}

	std::cout << std::endl;

	for (auto it = v.begin(); it < v.end(); it++) {
		std::cout << *it << std::endl;
	}

	return 0;
}