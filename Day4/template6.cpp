/*
	템플릿 매개변수
*/

#include <iostream>

template <typename T, int size>
class CTest {
private:
	T ary[size];
public:
	T& operator[](int idx) {	// 쓰기 가능 인덱스
		if (idx < 0 || idx >= size) {
			std::cout << "Error" << std::endl;
			exit(1);
		}
		return ary[idx];
	}

	void getData() {
		for (int i = 0; i < size; i++) {
			std::cout << ary[i] << std::endl;
		}
	}
};

int main() {

	CTest<int, 5> obj;
	obj.operator[](0) = 10;
	obj[1] = 20;
	obj[2] = 30;
	obj[3] = 40;
	obj[4] = 50;
	obj.getData();

	return 0;
}