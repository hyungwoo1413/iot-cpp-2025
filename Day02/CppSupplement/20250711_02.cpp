#include <iostream>

class Test {
public:
	void show() {
		std::cout << "주소: " << this << std::endl;
	}
};

int main() {
	Test a, b;
	a.show();  // this = &a
	b.show();  // this = &b (함수는 같지만 this는 다름)
	return 0;
}


/*
	같은 show() 함수를 호출했지만, 내부의 this 포인터는 객체마다 다름.

	즉, 코드는 공유되지만 동작은 객체에 따라 달라질 수 있음
*/