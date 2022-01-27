#include "DoublyLinkedList.h"
#include <iostream>


MyList::MyList() {
	head = 0;
	tail = 0;
	currentPtr = 0;
}


MyList::~MyList() {
	currentPtr = head;

	while (currentPtr != NULL) {
		head = currentPtr->next; //reassign to new head node
		free(currentPtr);
		currentPtr = head;
	}

	tail = NULL;
}

void MyList::insert(int value) {
	
}

void MyList::append(int value) {

}

void MyList::prepend(int value) {

}

void MyList::deleteNode() {

}

void MyList::displayNode() {

}

void MyList::displayList() {

}

bool MyList::search(int value) {
	return true;
}


