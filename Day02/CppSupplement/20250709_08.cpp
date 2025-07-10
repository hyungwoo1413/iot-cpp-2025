#include <iostream>

class Myclass {
private:
	int id = 10;			// C++ 11 이후 멤버 변수 초기화 가능
	char name[20];					// 배열이라서 대입이 안됨. strcpy()로 내용을 복사해야 함
	int age;
public:
	Myclass(int id, char name[20], int age) {
		this->id = id;				// this는 현재 객체를 가리키는 포인터
		// (*this).id = id;
		this->age = age;			// 그래서 this. 은 안됨 .은 객체(실체)에서 멤버에 접근할 때 사용
		strcpy(this->name, name);	// strcpy는 문자열을 복사하는 함수.
									// 배열을 선언하고 문자열을 저장하는 경우는 대입연산자 처리로 할 수 없다.	
	}

};

int main()
{

	return 0;
}


/*
	생성자 : 객체를 객성하면서 초기화할 수 있다.
*/