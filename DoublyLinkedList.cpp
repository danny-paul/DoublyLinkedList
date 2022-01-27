#include "DoublyLinkedList.h"
#include <iostream>


MyList::MyList() {
	head = NULL;
	tail = NULL;
	currentPtr = NULL;
}


MyList::~MyList() {
	currentPtr = head;

	//use currentPtr to traverse the linked list
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
	ListNode* nodePtr = new ListNode();
	nodePtr->value = value;
	nodePtr->next = NULL;
	nodePtr->prev = NULL;

	//is list empty?
	if (head != NULL) {
		//atleast one node, append new node to end and link appropriately
		nodePtr->prev = tail;  
		tail->next = nodePtr;  
		tail = nodePtr;

	}
	else {
		//empty linked list
		head = nodePtr;
		tail = nodePtr;
		currentPtr = nodePtr;
	}



	//Yes-->new node linked to head and tail
	//No-->link to tail node
}

//adds node to head of linked list
//O(1)
void MyList::prepend(int value) {
	ListNode* nodePtr = new ListNode();
	nodePtr->value = value;
	nodePtr->next = NULL;
	nodePtr->prev = NULL;

	currentPtr = head;

	if (currentPtr != NULL) {
		//new node becomes front, reassign links of the old front
		currentPtr->prev = nodePtr;
		nodePtr->next = currentPtr;
		head = nodePtr;
		currentPtr = head;
	}
	else {
		//empty list, assign all to this node
		head = nodePtr;
		tail = nodePtr;
		currentPtr = nodePtr;
	}

	//empty list
	
	//list not empty
	
}

void MyList::deleteNode() {

}

//displays the node value that currentPtr is pointing to
void MyList::displayNode() {
	if (currentPtr != NULL) {
		//currentPtr-> null
		std::cout << currentPtr->value << std::endl;
	}
	else {
		//currentPtr-> not null
		std::cout << "Null" << std::endl;
	}
}

//displays nodes in linked list
void MyList::displayList() {
	currentPtr = head;
	int count = 1;

	while (currentPtr != NULL) {
		std::cout << "#" << count << ": " << currentPtr->value << std::endl;
		currentPtr = currentPtr->next;
		count++;
	}

	currentPtr = head;  //moves back to head
}

//returns bool if found. If found moves currentPtr to that node. If not found, moved currentPtr to head
//O(n)
bool MyList::search(int value) {
	currentPtr = head;

	if (currentPtr != NULL) {
		//iterate through nodes (O(n))
		while (currentPtr != NULL) {
			if (currentPtr->value == value) {
				//end iterating and stop currentPtr on the correct node
				return true;
			}
			currentPtr = currentPtr->next;
		}
		return false; //nothing found, return false
	}
	else {
		return false;
	}
}


