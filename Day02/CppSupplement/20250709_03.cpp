#include <iostream>

void swap(int& a, int&  b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n1 = 10, n2 = 20;

	swap(n1, n2);

	std::cout << n1 << ", " << n2 << std::endl;
	return 0;
}