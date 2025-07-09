#include <iostream>

int& func() 
{
	int val = 10;   // 지역 변수 (스택에 저장)
	return val;     // 지역 변수의 참조를 반환함
}

int main()
{	
	int& res = func();				// 참조변수가 리턴하는 val은 메모리상에서 사라진다.
	std::cout << res << std::endl;

	return 0;
}

/*
	val은 func() 함수 스택 안에 존재하는 지역 변수입

	func()가 끝나면 스택은 사라지고, val의 메모리는 무효화

	int&로 그 사라진 메모리 주소를 참조(ref) 하고 있으니 -> 죽은 주소를 참조하는 상태
*/