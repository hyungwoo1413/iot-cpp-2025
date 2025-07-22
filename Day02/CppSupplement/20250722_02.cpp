#include <iostream>
#include <deque>

int main()
{
	std::deque<std::string> dq;
	dq.push_front("tiger");
	dq.push_front("lion");
	dq.push_back("cats");

	for (auto i : dq) {
		std::cout << i << " ";
	}

	std::cout << '\n';

	std::deque<std::string>::iterator it;
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	std::deque<std::string>::const_iterator conIter = dq.begin();
	conIter += 2;
	dq.insert(conIter, "INSERT");
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}
	
	std::cout << '\n';

	conIter = dq.end();
	conIter--;		// 마지막 주소
	conIter--;		// 마지막 앞에 주소
	dq.erase(conIter);
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	/*int a = 10, b = 20;*/
	/*int* pa = &a;
	pa = &b;*/
	/*const int* pa = &a;
	std::cout << *pa << std::endl;
	std::cout << *pa = 20;*/
	// pa = &b;

	// 배열의 각 원소가 e에 할당 됨. 쿠기에 상관없이 자동적으로 반복, 요소를 복사함.
	for (auto e : dq) {
		std::cout << e << " ";
	}

	std::cout << '\n';

	// 배열의 각 요소를 참조 받아 사용하는데 수정도 가능함.
	for (auto& e : dq) {
		std::cout << e << " ";
	}

	std::cout << '\n';

	for (auto i = 0; i < dq.size(); i++) {
		std::cout << dq[i] << " ";
	}

	return 0;
}