#ifndef LINKEDLIST_H
#define LINKEDLIST_H
// test
struct Node {
    int data;
    Node *next;
};

class LinkedList {
private:
    Node *head;
    Node *tail;
public:
    LinkedList();
    ~LinkedList();

    void insertAtHead(int value);
    void insertAtTail(int value);

    void print() const;
};

#endif // LINKEDLIST_H