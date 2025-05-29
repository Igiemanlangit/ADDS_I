#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node* head;

public:
    // constructors and destructor
    LinkedList();
    LinkedList(int* array, int len);
    ~LinkedList();

    // basic methods
    void printList();

    // deletion operations
    void deleteHead();
    void deleteTail();
    void deleteAtPosition(int pos);
    void deleteValue(int val);
    void deleteMiddle();
    void deleteNthFromEnd(int n);

    // swap operations
    void swapValues(int i, int j);
    void swapNodes(int i, int j);

    // duplicate removal
    void removeDuplicates();
};

#endif
