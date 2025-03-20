//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char* name, int age) {
//		printf("constructor call!\n");
//		strncpy(this->name, name, strlen(name) + 1);
//		this->age = age;
//	}
//
//	Person(const Person& other) {
//		printf("copy constructor call!\n");
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//		this->age = other.age;
//	}
//
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main() {
//
//	Person p("홍길동", 30);
//	p.printPerson();
//	
//	Person p2(p);
//	p2.printPerson();
//	
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}