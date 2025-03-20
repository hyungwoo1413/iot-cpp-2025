//#include <iostream>
//
///*
//	멤버 초기화
//	1. 
//	2. 
//	3. 객체를 멤버로 가지는 경우
//*/
//
//class ConstClass {
//private:
//	int m_value;
//	const int m_value2;  // 상수 멤버 변수는 객체 생성되기 전에 반드시 초기화가 되어야 한다.
//public:
//	ConstClass(int value, int value2) : m_value(value), m_value2(value2) {  }
//	void showValue() {
//		std::cout << m_value << ", " << m_value2 << std::endl;
//	}
//};
//
//class RefClass {
//private:
//	int& ref;  // 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
//public:
//	RefClass(int& r) : ref(r) {}
//	void showValue() {
//		std::cout << ref << std::endl;
//	}
//};
//
//class Position {
//public:
//	int m_x;
//	int m_y;
//
//	Position(int x, int y) {
//		m_x = x;
//		m_y = y;
//		std::cout << "Position Constructor~" << std::endl;
//	}
//	void getData() {
//		std::cout << "m_x: " << m_x << ", m_y: " << m_y << std::endl;
//	}
//};
//
//class ObjClass {
//private:
//	Position pos;	// 객체 멤버변수
//public:
//	ObjClass(int x, int y) : pos(x, y) {
//		std::cout << "ObjClass Constructor!" << std::endl;
//	}
//	void showValue() {
//		pos.getData();
//	}
//};
//
//int main() {
//	ConstClass obj(10, 20);
//	obj.showValue();
//
//	int n = 50;
//	RefClass obj2(n);
//	obj2.showValue();
//
//	std::cout << "=======================================" << std::endl;
//
//	ObjClass o(3, 6);
//	o.showValue();
//
//	return 0;
//}