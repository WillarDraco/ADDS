#include <iostream>
#include <LinkedList.h>
#include <Node.h>
#include <limits>

LinkedList::LinkedList(int* array, int len) {
    head = new Node(array[0], nullptr);
    Node* look = head;

    for (int i = 1; i < len; i++) {
        Node* temp = new Node(array[i], nullptr);
        look->setLink(temp);
    }
}

LinkedList::~LinkedList() {
    Node* look = head;
    delete head;

    while (look != nullptr) {
        Node* temp = look;
        look = look->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum){
    int count = 1;
    
    if (count >= pos) {
        Node* temp = new Node(newNum, head);
        return;
    }

    Node* look = head;
    look = look->getLink();
    Node* past = head;

    while (count != pos) {
        look = look->getLink();
        count++;
    }

    if (look == nullptr) {
        Node* endStart = new Node(newNum, nullptr);
        past->setLink(endStart);
    } else {
        Node* insertHere = new Node(newNum, look->getLink());
        look->setLink(insertHere);
    }

}

bool LinkedList::deletePosition(int pos){
    int count = 1;
    
    if (count == pos) {
        Node* temp = head->getLink();
        delete head;
        head = temp;
        return;
    }

    Node* look = head;
    look = look->getLink();
    Node* past = head;

    while (count != pos) {
        look = look->getLink();
        count++;
    }

    if (look == nullptr) {
        delete look;
        past->setLink(nullptr);
    } else {
        Node* temp = look->getLink();
        delete look;
        past->setLink(temp);
    }
}

int LinkedList::get(int pos){
    if (pos < 1) {
        return std::numeric_limits < int >::max();
    }
    
    int count = 1;
    
    if (count == pos) {
        return head->getData();
    }

    Node* look = head;
    look = look->getLink();

    while (count != pos) {
        look = look->getLink();
        count++;
    }

    if (look == nullptr) {
        return std::numeric_limits < int >::max();
    }

    return look->getData();
}

int LinkedList::search(int target){
    int count = 1;

    Node* look = head;

    while (look != nullptr) {
        if (look->getData() == target) {
            return count;
        }

        look = look->getLink();
        count++;
    }

    return -1;
}

void LinkedList::printList(){
    Node* look = head;

    if (head == nullptr) {
        std::cout << '[]' << std::endl;
    }

    while (look->getLink() != nullptr) {
        std::cout << '[' << look->getData() << '] ';
        look = look->getLink();
    }

    std::cout << '[' << look->getData() << ']' << std::endl;
}