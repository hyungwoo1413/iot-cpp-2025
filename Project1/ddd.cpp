#include <iostream>

class Arr {
	int* arr;
	int size = 4;
	int value;
	int index = 0;
public:

	Arr() {
		arr = new int[size];
	}

	~Arr() {
		delete[] arr;
	}

	void setValue() {
		while(1) {
			if (index != size) {
				std::cout << "값 입력: ";
				std::cin >> value;
				if (value == -1) {
					return;
				}
				arr[index] = value;
				index++;
				for (int i = 0; i < index; ++i)
				{
					std::cout << arr[i] << " " << size << std::endl;
				}
			}
			else {
				size *= 2;
				int* newArr = new int[size];
				for (int i = 0; i < size/2; ++i)
				{
					newArr[i] = arr[i];
				}
				delete[] arr;
				arr = newArr;
			}
		}
	}

	void printValue() {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
		}
	}
};

int main() {
	Arr myarr;
	myarr.setValue();
	myarr.printValue();

	return 0;
}