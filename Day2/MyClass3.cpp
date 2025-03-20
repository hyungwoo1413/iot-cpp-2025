//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class MyClass {
//private:
//	int id;
//	char* name;
//	int age;
//public:
//	MyClass(int _id, const char* _name, int _age) {
//		id = _id;
//		name = new char[strlen(_name) + 1];  // 동적할당
//		strcpy(name, _name);  // 배열을 선언한 후 대입연산자(=)를 사용하여 값을 직접 할당할 수 없다.
//		age = _age;
//	}
//
//	~MyClass() {
//		delete[] name;
//	}
//
//	void getData() {
//		std::cout << "아이디: " << id << "\n이름: " << name << "\n나이: " << age << std::endl;
//	}
//};
//
//int main() {
//	MyClass obj(1, "김철수", 20);
//	obj.getData();
//
//	return 0;
//}