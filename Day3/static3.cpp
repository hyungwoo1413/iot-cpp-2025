///*
//	StaticTest 라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
//	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에.
//	출력 : showmember() 메서드를 구현하시오
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class StaticTest {
//private:
//	char* name;
//	char* phone;
//	char* addr;
//	static int cnt;
//public:
//	StaticTest(const char* name, const char* phone, const char* addr) {
//		this->name = new char[strlen(name) + 1];
//		strcpy(this->name, name);
//		this->phone = new char[strlen(phone) + 1];
//		strcpy(this->phone, phone);
//		this->addr = new char[strlen(addr) + 1];
//		strcpy(this->addr, addr);
//		cnt++;
//	}
//
//	~StaticTest() {
//		delete[] name;
//		delete[] phone;
//		delete[] addr;
//	}
//
//	void showmember() {
//		std::cout << "[" << cnt << "]" << std::endl;
//		printf("이름: %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//	}
//};
//
//int StaticTest::cnt = 0;
//
//int main() {
//
//	StaticTest m1("홍길동", "010-0000-0000", "부산");
//	m1.showmember();
//	StaticTest m2("김철수", "010-1111-1111", "대구");
//	m2.showmember();
//	StaticTest m3("이민준", "010-1111-1111", "울산");
//	m3.showmember();
//
//	return 0;
//}