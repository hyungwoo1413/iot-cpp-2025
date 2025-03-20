//#include <iostream>
///*
//	static - 클래스들이 공유한다. (this 포인터가 없다)
//*/
//
//class StaticTest {
//public:
//	int n;
//	static int static_n;	// static 멤버 변수
//	StaticTest();
//	void print();
//};
//int StaticTest::static_n = 10;  // static 멤버 변수 초기화는 클래스 외부에서 이루어져야한다.
//
//StaticTest::StaticTest() {
//	n = 20;
//	//static_n = 10;
//}
//
//void StaticTest::print() {
//	std::cout << "Static: " << static_n << ", n: " << n << std::endl;
//}
//
//int main() {
//	StaticTest ob1, ob2;
//	ob1.print();
//	ob2.print();
//	
//	ob2.static_n = 1000;
//	ob2.n = 50;
//	ob2.print();
//	ob1.print();
//
//	return 0;
//}