#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	Node* look = head;
	Node* spot1 = nullptr;
	Node* spot2 = nullptr;
	int count1 = 0;
	int count2 = 0;
	bool count1found = false;
	bool count2found = false;

	while (look != nullptr && ((count1 < pos1 || count2 < pos2) && (count1found == false || count2found == false))) {
		if (count1 == pos1) {
			spot1 = look;
			count1found = true;
		}

		if (count2 == pos2) {
			spot2 = look;
			count2found = true;
		}

		look = look->link;
		count1++;
		count2++;
	}

	if (count1found == true && count2found == true) {
		int datatemp = spot1->data;
		spot1->data = spot2->data;
		spot2->data = datatemp;
		return true;
	}

	return false;
}

bool LinkedList::find_and_delete(int target) {
	Node* look = head;
	Node* past = head;
	Node* targetNode = nullptr;

	if (look->data == target) {
		Node* tempHead = look->link;
		delete look;
		head = tempHead;
		return true;
	}

	look = look->link;

	while (look != nullptr) {
		if (look->data == target) {
			Node* tempNext = look->link;
			delete look;
			past->link = tempNext;
			return true;
		}
	}

	return false;
}