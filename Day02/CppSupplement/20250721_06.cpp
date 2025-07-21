#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//printf("%d\n", v.at(6));

	for (auto i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
		//std::cout << v.at(i) << " ";
	}
	
	std::cout << '\n';

	std::vector<int>::iterator it;		// 반복자를 사용한 출력
	for (it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	// vector 크기를 나타내는 표준화된 정수 자료형
	// vector 템플릿 형식에는 int 라는 멤버가 있으며 vector<int>::size_type로 정의
	for (std::vector<int>::size_type i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}

	std::cout << '\n';

	for (auto i : v) {
		std::cout << i << " ";
	}
	return 0;
}