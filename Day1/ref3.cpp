//#include <iostream>
//using namespace std;
//
///*
//	레퍼런스 - 선언과 동시에 반드시 초기화해야 한다.
//*/
//
//int main() {
//
//	int num = 10, num2 = 100;
//	int& ref = num;  // num의 메모리 공간에 ref라는 별명이 붙는다.
//	int* pn = &num;
//	int& rref = ref;
//
//	num++;
//	ref++;
//	(*pn)++;
//	rref++;
//
//	cout << num << endl;
//	cout << ref << endl;
//	cout << *pn << endl;
//
//	cout << &num << endl;
//	cout << &ref << endl;
//	cout << pn << endl;
//
//	return 0;
//}