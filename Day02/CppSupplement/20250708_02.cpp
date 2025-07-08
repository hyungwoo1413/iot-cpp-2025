#include <iostream>

void change_val(int* p)
{
	*p = 20; // 포인터를 통해서 값 변경
}

int main()
{
	int num = 10;
	std::cout << num << std::endl;
	change_val(&num);
	std::cout << num << std::endl;

	return 0;
}

void change_val(int& p)
{
	p = 20;
}

int main()
{
	int num = 10;
	std::cout << num << std::endl;
	change_val(num);
	std::cout << num << std::endl;

	return 0;
}


/*
	int n;
	int* pn;
	int& rn;	// 레퍼런스 변수(별명, 별칭)

	(lvalue)int n = 10(rvalue : 리터럴);
	n = n2;
	10 = n2; X
*/