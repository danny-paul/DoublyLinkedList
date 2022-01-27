#include "DoublyLinkedList.h"
#include <iostream>

int main() {
	MyList list;

	list.append(2);
	list.append(4);
	list.append(5);
	list.append(-1);
	list.append(101);
	list.append(-1987);
	list.prepend(999);
	list.append(989);
	list.prepend(888);
	list.displayList();

	std::cout << "list.search(101)" << list.search(101) << std::endl;
	std::cout << "list.displayNode():";
	list.displayNode();
	std::cout << "list.search(9)" << list.search(9) << std::endl;
	std::cout << "list.displayNode():";
	list.displayNode();

	return 0;
}