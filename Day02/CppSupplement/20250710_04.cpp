#include <iostream>

class Myclass {
private:
	int a;
	static int static_a;
public:
	Myclass();
	void print();
	static void set_static_a(int _a);		// static 멤버의 값을 변경할 수 있는 기능을 함수(함수의 선언)
};

int Myclass::static_a = 100;

Myclass::Myclass() {
	a = 20;
}

void Myclass::set_static_a(int _a) {
	static_a = _a;
	// a = 8;		// 일반 멤버 변수는 들어오면 안된다.
}

void Myclass::print() {
	std::cout << a << ". " << static_a << std::endl;
}

int main()
{
	Myclass obj;
	obj.print();

	//obj.static_a = 50;		// static 키워드는 모든 객체가 모두 공유(클래스	변수)
	//obj.a = 77;
	obj.print();

	Myclass obj2;
	obj2.print();

	return 0;
}

/*
	객체를 통해서 static 멤버 변수에 접근할 수 있지만, 좋은 방법은 아님
*/