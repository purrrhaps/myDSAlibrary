#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(): head{nullptr}, tail{nullptr}{}

LinkedList::~LinkedList() {

}

void LinkedList::insertAtHead(const int value) {
    if (head == nullptr) {
        head = new Node;
        head->next = nullptr;
        head->data = value;
        tail = head;
    }
    else {
        Node *temp = head;
        head = new Node;
        head->next = temp;
        head->data = value;
        temp = nullptr;
        delete temp;
    }
}
void LinkedList::insertAtTail(const int value) {
    if (tail == nullptr) {
        tail = new Node;
        tail->next = nullptr;
        tail->data = value;
        head = tail;
    }
    else {
        tail->next = new Node;
        tail = tail->next;
        tail->next = nullptr;
        tail->data = value;
    }
}

void LinkedList::print() const {
    if (head == nullptr)
        std::cout << "Empty list.\n";
    else {
        Node *currNode = head;
        while (currNode != nullptr) {
            if (currNode->next == nullptr)
                std::cout << currNode->data;
            else
                std::cout << currNode->data << " -> ";
            currNode = currNode->next;
        }
        std::cout << '\n';
        delete currNode;
    }
}