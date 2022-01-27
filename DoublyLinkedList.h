#pragma once

class MyList {
public:
	MyList();
	~MyList();
	void insert(int);
	void append(int);
	void prepend(int);
	void deleteNode();
	void displayNode();
	void displayList();
	bool search(int);
private:
	struct ListNode {
		int value;
		struct ListNode* next;
		struct ListNode* prev;
	};
	ListNode* head;
	ListNode* tail;
	ListNode* currentPtr;
};
