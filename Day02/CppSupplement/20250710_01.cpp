#include <iostream>

// 1. 생성자 호출
class Myclass {
	int a;		// 클래스를 정의할 때 접근 지정자를 생략하면 기본값이 private
public:
	Myclass(int _a) { a = _a; }
};

// 2. 초기화 리스트
class Myclass1 {
	int a;
public:
	Myclass1(int _a) : a(_a) {}		// 콜론초기화 멤버 변수 초기화는 생성자 본문보다 먼저 실행
};
// C++11 DLGN (in-class 초기화)
class Myclass2 {
	int x = 10;		// 선언과 동시에 초기화
};

class Myclass3 {
	static int count;		// static 멤버 변수 클래스 외부에서 초기화해야함
};

int Myclass3::count = 0;		// 클래스 외부에서 static 멤버 변수 초기화

class Myclass4 {
	const int id;
public:
	Myclass4(int _id) : id(_id) {}	// const 멤버 변수는 생성자에서 초기화해야 함
};

class Myclass5 {
	int& ref;
	// int x;
public:
	Myclass5(int& r) : ref(r) {}		// 참조형 멤버 변수는 생성자에서 초기화해야 함
	// void f(int _x) : x(_x) {}			// 일반함수는 초기화리스트를 사용할 수 없음
};

Myclass a(10);

int main()
{
	Myclass b(10);
	return 0;
}

/*
	static 멤버변수는 클래스 이름으로 호출하고 접근 가능하다.
	멤버를 수정하지 않을려면 const로 선언해서 값을 변경할 수 없도록 한다.
	순수가상함수는 재정의를 해야 사용할 수 있다.
	virtual 함수

*/