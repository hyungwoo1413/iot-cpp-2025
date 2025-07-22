/*
	std::list::merge 현재 리스트와 other 리스트를 정렬된 상태를 유지하면서 병합한다.
	병합 후 other는 비게 되며, 두 리스트 모두 오름차순 정렬이 되어있어야 한다.

*/

#include <iostream>
#include <list>

void showList(std::list<std::string>& target) {
	std::list<std::string>::iterator from;
	for(from = target.begin(); from != target.end(); ++from) {
		std::cout << *from << " ";
	}
	std::cout << '\n';
}

int main()
{
	std::list<std::string> first;
	std::list<std::string> second;

	first.push_back("alpha");
	first.push_back("bravo");
	first.push_back("golf");
	first.push_back("guebec");

	second.push_back("omega");
	second.push_back("milk");
	second.push_back("november");
	second.push_back("zulu");

	showList(first);
	showList(second);

	second.sort();
	showList(second);
	first.merge(second);
	showList(first);

	return 0;
}