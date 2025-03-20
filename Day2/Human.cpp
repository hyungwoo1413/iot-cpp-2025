#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
	step1. 이름과 전화번호는 동적할당
*/

class Human {
private:
	char* pname;
	int age;
	char* ptel;

public:
	Human(const char* _name, int _age, const char* _tel) {
		pname = new char[strlen(_name) + 1];
		age = _age;
		ptel = new char[strlen(_tel) + 1];

		strcpy(pname, _name);
		strcpy(ptel, _tel);
	}

	~Human() {
		delete[] pname;
		delete[] ptel;
	}

	void getData() {
		std::cout << "이름: " << pname << "\n나이: " << age << "\n전화번호: " << ptel << std::endl;
	}
};

int main() {
	Human h("홍길동", 30, "010-1234-1234");
	h.getData();

	return 0;
}