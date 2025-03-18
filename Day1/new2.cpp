//// C++ 스타일
///*
//	메모리 동적 할당: new - delete
//	자료형 포인터 : new 자료형(크기)
//	new는 생성자를 호출한다. 즉 new는 객체를 생성시킨다.
//*/
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int size;
//
//	//int *pn = new int;  //힙영역에 int 크기로 동적 할당을 받는다.
//	//delete pn;
//
//	cout << "크기 >> ";
//	cin >> size;
//
//	int* pary = new int[size];
//
//	for (int i = 0; i < size; i++) {
//		pary[i] = i + 1;
//	}
//
//	for (int i = 0; i < size; i++) {
//		if (i == size - 1) {
//			cout << pary[i] << endl;
//		}
//		else {
//			cout << pary[i] << ", ";
//		}
//	}
//
//	delete[] pary;
//
//	return 0;
//}