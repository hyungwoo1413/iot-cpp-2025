//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
///*
//	이동 생성자(T&&)
//	r-value reference를 파라미터로 갖는 이동 생성자
//*/
//
//class Human {
//private:
//	char name[10];
//	int age;
//public:
//	// 입력 2개 받는 생성자
//	Human(const char* name, int age) {
//		std::cout << "입력 2개 생성자 호출" << std::endl;
//		strcpy(this->name, name);
//		this->age = age;
//	}
//
//	// 복사생성자
//	Human(const Human& other) {
//		std::cout << "복사 생성자 호출" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//
//	// 이동생성자
//	Human(Human&& other) noexcept {
//		std::cout << "이동 생성자 호출" << std::endl;
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//
//	void printHuman() {
//		std::cout << "name: " << this->name << ", age: " << this->age << std::endl;
//	}
//};
//
//int main() {
//
//	Human h("홍길동", 30);
//	h.printHuman();
//
//	Human h2(h);
//	h2.printHuman();
//
//	Human h3(std::move(h));
//	h3.printHuman();
//
//	return 0;
//}