#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;

	std::cout << "[ v[i], v.size(), v.capacity() ]" << std::endl;		
	// size : 원소의 개수, capacity : 벡터의 크기

	for (int i = 0; i <= 32; i++) {
		v.push_back(i + 1);
		std::cout << "[ " << v[i] << ", " << v.size() << ", " << v.capacity() << " ]" << std::endl;
	}

	std::cout << std::endl << std::endl;

	std::vector<int> v1;
	v1.push_back(1);			// 순차적으로 원소를 삽입
	v1.push_back(2);
	v1.push_back(3);
	v1.insert(v1.begin(), 10);	// 첫 번째 위치에 10 삽입
	v1.insert(find(v1.begin(), v1.end(), 3), 20);	// 처음부터 끝까지 찾고 3의 위치에 앞에 20 삽입

	v1.push_back(7);
	v1.pop_back();		// 맨 마지막 원소 제거


	for (auto i : v1) {
		std::cout << i << std::endl;
	}

	return 0;
}