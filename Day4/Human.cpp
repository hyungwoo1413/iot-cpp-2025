﻿///*
//	step3. char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
//	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
//	man 객체를 복사하여 copyman 객체를 생성하시오.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* name, int age) {
//		printf("const\n");
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->age = age;
//	}
//
//	Human(const Human& other) {
//		printf("copy const\n");
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//
//	~Human() {
//		delete[] this->name;
//	}
//
//	void showHuman() {
//		printf("이름: %s, 나이: %d\n", name, age);
//	}
//};
//
//int main() {
//	Human man("홍명보", 30);
//	man.showHuman();
//	Human copyman(man);
//	copyman.showHuman();
//
//	return 0;
//}