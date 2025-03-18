///*
//	함수의 다형성
//	- 함수 오버로딩(함수의 다중정의) : 이름은 같은데 매개변수의 타입이나 개수가 다르면 다른 함수이다.
//	- 함수 오버라이딩(함수의 재정의) -> 상속
//*/
//
//#include <iostream>
//using namespace std;
//
//int func() {
//	return 10;
//}
//
//int func(char c) {
//	return c;
//}
//
//int func(int n) {
//	return 10 + n;
//}
//
//int func(int n1, int n2) {
//	return n1 + n2;
//}
//
///*
//char func(char c) {
//	return c;
//}
//사용 불가능 */
//
//int main(){
//
//	cout << func() << endl;
//	cout << func('a') << endl;
//	cout << func(10) << endl;
//	cout << func(10,20) << endl;
//
//	return 0;
//}