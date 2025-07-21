#include <iostream>
#include <vector>

int main()
{
	std::vector<int> arr;		// 크기가 0인 벡터 선언
	std::vector<int> v(10);		// 크기가 10인 벡터 선언
	std::vector<int> v1 = { 1, 2, 3, 4, 5 };	// 크기 5

	std::cout << "arr size : " << arr.size() << std::endl;
	std::cout << "v(10) size : " << v.size() << std::endl;
	std::cout << "v1 size : " << v1.size() << "\n\n";

	for (int i = 0; i < 10; i++) {
		std::cout << "v[" << i << "] : " << v[i] << '\n';
	}

	std::cout << '\n';

	for (auto i : v1) {					// 범위 기반 for문(향상된 for 문)
		std::cout << i << std::endl;
	}

	std::cout << "v1의 첫번째 요소값 : " << *v1.begin() << std::endl;
	std::cout << "v1의 마지막 요소값 : " << *(v1.end() -1) << std::endl;

	return 0;
}

/*
	범위기반 for문의 i는 요소값을 가져와서 복사하여 저장한다.
	i 는 인덱스가 아니다.

	v.begin()은 첫번째 주소 리턴
	v.end()는 마지막 다음 주소를 리턴

	v1.begin() 자체는 iterator(반복자) 타입
	예: std::vector<int>::iterator
	iterator는 포인터처럼 동작하는 객체, 값 그 자체가 아님!!
*/