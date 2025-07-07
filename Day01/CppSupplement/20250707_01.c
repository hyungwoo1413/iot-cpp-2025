#include <stdio.h>

void func();			// 함수 선언
void func1(char *arg);
int func2(int n);
int fucn3();

int main()
{
	int num = 10;			// 변수
	char ch[] = "우";		// wchar_t 권장
	func();					// 함수 호출
	func1(ch);				// 실인수(실인자)
	int res = func2(num);	// 출력이 있으면 반환값을 받아줘야함(int res)
	int res2 = func3();

	printf("func2 : %d\n", res);
	printf("func3 : %d\n", res2);

	return 0;
}

void func()		// 함수 정의. 함수 머리 : 출력 함수이름(입력)
{
	printf("Hello\n");
}

void func1(char *arg)	// 매개변수. 입력 있음, arg = 'a'
{
	printf("%s Hello\n", arg);
}

int func2(int n)	// 출력, 입력 있음. 출력이 있으면 return 사용
{
	return 0;
}

int func3()
{
	return 100;
}

/*
함수의 정의 : 실제로 함수가 어떻게 작동하는지 내용을 구현한 것
함수의 호출 : 정의된 함수를 실제로 사용하는 것
함수의 선언 : 함수의 이름, 매개변수 타입, 반환 타입을 컴파일러에게 미리 알려줌
*/