//#include <iostream>
//
///*
//	생성자 constructor
//*/
//
//class MyClass {
//private:
//	int m_num1;
//	int m_num2;
//public:
//	MyClass() {
//		m_num1 = 0;
//		m_num2 = 0;
//	}
//
//	MyClass(int num1, int num2) {
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//
//	void printData() {
//		std::cout << "나는 MyClass의 인스턴스입니다." << std::endl;
//		std::cout << m_num1 << ", " << m_num2 << std::endl;
//	}
//};
//
//int main() {
//	MyClass obj;
//	obj.printData();
//	MyClass obj2(100, 200);
//	obj2.printData();
//
//	return 0;
//}