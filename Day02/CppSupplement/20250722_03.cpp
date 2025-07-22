/*
	이중 연결 리스트 기반 중간 삽입/삭제가 빠르고 임의 접근이 불가하다.(인덱스 접근이 안됨)
*/
#include <iostream>
#include <list>

int main()
{
	//std::list<int> li;
	//std::cout << "size : " << li.size() << '\n';
	//std::cout << "li.front() : " << li.front() << '\n';

	std::list<std::string> myList(5, std::string("Hello"));
	std::list<std::string> container(10);
	std::list<int> li = { 10, 20, 30 };

	std::list<std::string>::iterator it;
	for (it = myList.begin(); it != myList.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	for (it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';

	for (auto i : li) {
		std::cout << i << " ";
	}

	std::cout << '\n';

	li.push_back(10);
	li.push_front(20);

	for (auto i : li) {
		std::cout << i << " ";
	}

	return 0;
}