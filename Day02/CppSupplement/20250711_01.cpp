#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class Person {
	char name[20];
	int age;
public:
	Person() {}			// 초기화하지 않기 때문에 쓰레기값이 나옴
	Person(const char* name, int age) {				// name, age는 객체마다 따로 존재 하기때문에 stack 영역에 할당됨.
		strcpy(this->name, name);
		this->age = age;
		std::cout << "Cosntructor 호출!!" << std::endl;
		// printf("Constructor 호출!!");
	}
	void view() {
		//printf("Name: %s, Age: %d\n", this->name, this->age);
		std::cout << "Name: " << this->name << ", Age: " << this->age << "\n\n";
	}
	Person(const Person& other) {
		strcpy(this->name, other.name);
		this->age = other.age;
		std::cout << "복사 Constructor 호출!!" << std::endl;
	}
};

int main()
{
	// Person p;	// 기본생성자 없음. 기본생성자 있어야함.
	// p.view();

	Person p2("Alice", 30); // 사용자 정의 생성자 호출
	p2.view();

	Person p3(p2);	// 복사 생성자 호출	
	p2.view();

	Person p4 = p2;
	p3.view();

	return 0;
}

/*
	멤버 함수는 모든 객체가 공유
	멤버 변수는 객체마다 따로 존재

	힙영역 메모리공간에 할당하려면 깊은 복사(deep copy) 필요

	얕은 복사에서 포인터 자체는 스택에 저장. 실제 데이터는 힙에 저장됨
*/