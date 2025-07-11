#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>

class Person {
    char* name;
    int age;
public:
    Person() {

    }

    Person(const char* name, int age) {
        this->name = new char[strlen(name) + 1];
        // strcpy(this->name, name);
		//strncpy(this->name, name, strlen(name) + 1);
		strcpy_s((this->name), strlen(name) + 1, name);
        this->age = age;
        std::cout << "Constructor 호출!!" << std::endl;
    }

    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        //strcpy(name, other.name);
		//strncpy(this->name, other.name, strlen(other.name) + 1);    // null 이 들어갈 공간이 있어야 함.
        strcpy_s((this->name), strlen(other.name) + 1, other.name);
        age = other.age;
        std::cout << "Copy Constructor 호출!!" << std::endl;
    }

    ~Person() {
        delete[] name;
        std::cout << "소멸자 호출!" << std::endl;
    }

    void view() {
        std::cout << "Name: " << name << ", Age: " << age << "\n\n";
    }
};

int main()
{
    // char c[3] = "abc";  // '\0' 문자가 들어갈 공간이 있어야 함. 
    // c[0] = 'a';
	// c[1] = 'b';
	// c[2] = 'c';

    Person p("홍길동", 30);
	p.view();

	Person p2 = p;
    p2.view();

	Person p3(p); // 복사 생성자 호출
	p3.view();

    return 0;
}

/*
    strcpy_s
	strcpy_s
    strcnpy

    복사 생성자
    이동 생성자
    변환 생성자 : 인자가 하나인 생성자
*/