#include <stdio.h>

int a;
const int global_c = 100;

int func2() {
	return 1;
}

void func() {
	printf("function : %p\n", func);		// 함수의 이름 = 주소
}											// 배열의 이름 = 주소			

int main()
{
	int b = 100;
	static int c;
	const int d = 10;	// 선언과 동시에 초기화 시켜야 함.	
						// 변수 d를 통해서 d의 값을 변경 x
	char arr[20] = "Hi";
	// d = 20;
	/*const int* pd = &d;

	const int* pb;
	pb = &d;

	int c =  200;
	int* const ppb = &b;

	*ppb = 1000;
	ppb = &c;

	const int* const ppc = &c;*/

	// *pb = 10;
	// b = 10;


	func();
	printf("func2() : %p\n", func2);
	printf("local b : %p\n", &b);
	printf("local c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", arr);
	printf("global a : %p\n", &a);
	printf("global c : %p\n", &global_c);

	return 0;
}

/*
	변수 : 무언가을 저장할 수 있는 공간 

	data segment : stack(지역, 매개변수), heap(사용자), data(전역, static, 문자열 리터럴)`
	code segment : 함수 하나당 한개 할당
*/