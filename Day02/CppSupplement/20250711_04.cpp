#include <iostream>

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) {	// 변환 생성자
		std::cout << "Constructor called with value: " << num << std::endl;
	}
};

int main()
{
	int n = 10;
	int& rn = n;

	int&& rrn = 20;
	const int& rrn = 10;

	return 0;
}

/*
	이동생성자 : 우측 값 레퍼런스를 파라미터로 갖는 이동 생성자 (EX. T&&)
*/