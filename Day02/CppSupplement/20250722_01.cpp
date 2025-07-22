#include <iostream>
#include <deque>

int main()
{
	std::deque<int> dq;
	for (int i = 1; i <= 5; i++) {
		dq.push_back(i * 10);
	}

	std::deque<int>::iterator it;
	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	dq.push_front(1);		// 앞쪽 삽입
	dq.push_front(2);
	dq.push_back(100);		// 뒤쪽 삽입
	dq.push_back(200);

	for (it = dq.begin(); it != dq.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	std::deque<int>::reverse_iterator rIter;
	for (rIter = dq.rbegin(); rIter != dq.rend(); rIter++) {
		std::cout << *rIter << " ";
	}

	return 0;
}

/*
	양쪽 끝에서 데이터를 삽입하고 제거할 수 있는 양뱡향 큐
*/