#include "LinkedList.h"

int main() {
    LinkedList list;
    list.print();

    list.insertAtHead(1);
    list.print();

    list.insertAtTail(2);
    list.print();

    list.insertAtHead(3);
    list.print();

    list.insertAtTail(4);
    list.print();

    list.insertAtTail(5);
    list.print();

    return 0;
}