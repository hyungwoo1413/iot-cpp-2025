//#include <iostream>
//
//class Arr {
//	int* arr;
//	int size = 4;
//	int value;
//	int index = 0;
//public:
//
//	Arr() {
//		arr = new int[size];
//	}
//
//	~Arr() {
//		delete[] arr;
//	}
//
//	void setValue() {
//		std::cout << "(-1 입력시 종료)" << std::endl;
//		while(true) {
//			if (index < size) {
//				std::cout << "값 입력: ";
//				std::cin >> value;
//
//				if (value == -1) {
//					break;
//				}
//
//				arr[index] = value;
//				index++;
//
//				std::cout << "현재 배열 [ ";
//				for (int i = 0; i < index; ++i)
//				{
//					std::cout << arr[i] << " ";
//				}
//				std::cout << "] (size: " << size << ")" << std::endl;
//			}
//			else {	
//				// 배열 크기 증가
//				size *= 2;
//				int* newArr = new int[size];
//
//				// 기존 배열 복사
//				for (int i = 0; i < size/2; ++i)
//				{
//					newArr[i] = arr[i];
//				}
//
//				// 기존 메모리 해제
//				delete[] arr;
//				arr = newArr;
//			}
//		}
//	}
//
//	void printValue() {
//		for (int i = 0; i < index; i++) {
//			std::cout << arr[i] << " ";
//		}
//	}
//};
//
//int main() {
//	Arr myarr;
//	myarr.setValue();
//	myarr.printValue();
//
//	return 0;
//}