#include <iostream>

int func(int& arg)
{
	arg += 1;
	return arg;		// arg는 함수 안에서는 l-value
}

int main()
{
	int num = 10;

	const int& res = func(num);		// 리턴되는 값이 상수

	std::cout << res << std::endl;

	return 0;
}


/*
	return에서 arg를 리턴하면 그 값을 복사해서 호출한 쪽으로 전달

	복사된 "결과물"은 더 이상 이름이 없는 임시값 (r-value)이 됨

	즉, "리턴식(return expression)은 항상 r-value
*/