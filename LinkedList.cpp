#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include <limits>

LinkedList::LinkedList(int* array, int len) {
    head = new Node(array[0], nullptr);
    Node* look = head;

    for (int i = 1; i < len; i++) {
        Node* temp = new Node(array[i], nullptr);
        look->setLink(temp);
        look = look->getLink();
    }
}

LinkedList::~LinkedList() {
    Node* look = head;

    while (look != nullptr) {
        Node* temp = look;
        look = look->getLink();
        delete temp;
    }
    
    delete head;

}

void LinkedList::insertPosition(int pos, int newNum){
    
    if (pos < 1) {
        Node* temp = new Node(newNum, head);
        head = temp;
        return;
    }

    Node* look = head;
    look = look->getLink();
    Node* past = head;

    int count = 2;

    while (count < pos && look->getLink() != nullptr) {
        look = look->getLink();
        past = past->getLink();
        count++;
    }

    if (look->getLink() == nullptr && count == pos - 1) {
        Node* endStart = new Node(newNum, nullptr);
        past->setLink(endStart);
    } else if (pos > count) {
        Node* endStart = new Node(newNum, nullptr);
        past->setLink(endStart);
    } else {
        Node* insertHere = new Node(newNum, look);
        past->setLink(insertHere);
    }
}

// bool LinkedList::deletePosition(int pos){
//     int count = 1;
    
//     if (count == pos) {
//         Node* fakeHead = head;
//         head = head->getLink();
//         delete fakeHead;
//         return true;
//     }

//     Node* look = head;
//     look = look->getLink();
//     Node* past = head;
//     count++;

//     while (count != pos && look->getLink() != nullptr) {
//         look = look->getLink();
//         past = past->getLink();
//         count++;
//     }

//     if (look->getLink() == nullptr && count == pos - 1) {
//         delete look;
//         past->setLink(nullptr);
//         return true;
//     } else if (count == pos) {
//         Node* temp = look->getLink();
//         delete look;
//         past->setLink(temp);
//         return true;
//     }
    
//     return false;
// }

bool LinkedList::deletePosition(int pos){
    int count = 1;
    
    if (count == pos) {
        Node* temp = head->getLink();
        delete head;
        head = temp;
        return true;
    }

    Node* look = head;
    look = look->getLink();
    Node* past = head;

    while (count != pos && look->getLink() != nullptr) {
        look = look->getLink();
        count++;
    }

    if (look->getLink() == nullptr && count == pos - 1) {
        delete look;
        past->setLink(nullptr);
        return true;
    } else if (count == pos) {
        Node* temp = look->getLink();
        delete look;
        past->setLink(temp);
        return true;
    }
    
    return false;
}

int LinkedList::get(int pos){
    if (pos < 1) {
        return std::numeric_limits < int >::max();
    }
    
    int count = 1;
    
    if (count == pos) {
        return head->getData();
    }

    count++;

    Node* look = head;
    look = look->getLink();

    while (count != pos && look->getLink() != nullptr) {
        look = look->getLink();
        count++;
    }

    if (look->getLink() == nullptr && count == pos - 1) {
        return std::numeric_limits < int >::max();
    } else if (count == pos) {
        return look->getData();
    }

    return std::numeric_limits < int >::max();
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
        std::cout << "[]" << std::endl;
        return;
    }

    std::cout << "[";

    while (look->getLink() != nullptr) {
        std::cout << look->getData() << " ";
        look = look->getLink();
    }

    std::cout << look->getData() << "]" << std::endl;
}