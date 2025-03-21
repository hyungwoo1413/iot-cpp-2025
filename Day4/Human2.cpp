///*
//	step4. 
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//private:
//	char* name;
//	int age;
//public:
//	Human(const char* name = " ", int age = 0) {
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
//
//	Human& operator = (const Human& other);
//};
//
//Human& Human::operator = (const Human& other) {
//	if (this != &other) {
//		delete[] this->name;
//		this->name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//		this->age = other.age;
//	}
//	return *this;
//}
//
//int main() {
//	Human man("홍명보", 30);
//	man.showHuman();
//	Human copyman(man);
//	copyman.showHuman();
//	
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//
//	return 0;
//}