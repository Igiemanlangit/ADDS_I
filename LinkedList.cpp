#include "LinkedList.h"
#include <iostream>
#include <limits>
using namespace std;

//default constructor
LinkedList::LinkedList() {
    head = nullptr;
}

//constructor from array
LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = len - 1; i >= 0; --i) {
        Node* newNode = new Node(array[i]);
        newNode->setLink(head);
        head = newNode;
    }
}

//destructor
LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
    }
}

//prints the list
void LinkedList::printList() {
    Node* current = head;
    cout << "[";
    while (current != nullptr) {
        cout << current->getData();
        current = current->getLink();
        if (current) cout << " ";
    }
    cout << "]" << endl;
}

//1. delete the head node
void LinkedList::deleteHead()
{
    if (head == nullptr) return;
    Node* temp = head;
    head = head->getLink();
    delete temp;
}


//2. delete the last node
void LinkedList::deleteTail()
{
    if(head == nullptr) return;

    if (head->getLink() == nullptr)
    {
        delete head;
        head == nullptr;
        return;
    }

    Node* current = head;
    while(current->getLink()->getLink() != nullptr)
    {
        current = current->getLink();
    }

    delete current->getLink();
    current->setLink(nullptr);
}


//3. delete node at position pos (0-based index)
void LinkedList::deleteAtPosition(int pos)
{
    if (head == nullptr || pos < 0) return;

    if (head->getLink() == nullptr)
    {
        deleteHead();
        return;
    }

    Node* current = head;

    for (int i = 0; current && i < pos - 1; i++)
    {
        current = current->getLink();
    }

    if (current == nullptr || current->getLink() == nullptr) return;
    Node* temp = getLink();
    current->setLink(temp->getLink());
}



//4. delete first occurrence of a value
void LinkedList::deleteValue(int val)


//5. swap values at i and j
void LinkedList::swapValues(int i, int j) 
{
    if (i == j) return;
    Node* node1 = nullptr;
    Node* node2 = nullptr;
    Node* current = head;
    int index = 0;
    while (current) {
        if (index == i) node1 = current;
        if (index == j) node2 = current;
        current = current->getLink();
        index++;
    }
    if (node1 && node2) {
        int temp = node1->getData();
        node1->setData(node2->getData());
        node2->setData(temp);
    }
}

//6. swap actual nodes at i and j
void LinkedList::swapNodes(int i, int j) {
    if (i == j) return;
    if (i > j) swap(i, j);
    Node* prevX = nullptr, *currX = head;
    for (int idx = 0; currX && idx < i; ++idx) {
        prevX = currX;
        currX = currX->getLink();
    }
    Node* prevY = nullptr, *currY = head;
    for (int idx = 0; currY && idx < j; ++idx) {
        prevY = currY;
        currY = currY->getLink();
    }
    if (!currX || !currY) return;
    if (prevX) prevX->setLink(currY);
    else head = currY;
    if (prevY) prevY->setLink(currX);
    else head = currX;
    Node* temp = currX->getLink();
    currX->setLink(currY->getLink());
    currY->setLink(temp);
}

//7. remove all duplicates from sorted list
void LinkedList::removeDuplicates() {
    Node* current = head;
    while (current && current->getLink()) {
        if (current->getData() == current->getLink()->getData()) {
            Node* temp = current->getLink();
            current->setLink(temp->getLink());
            delete temp;
        } else {
            current = current->getLink();
        }
    }
}

//8. delete middle node (second middle if even)
void LinkedList::deleteMiddle() {
    if (!head || !head->getLink()) return;
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;
    while (fast && fast->getLink()) {
        fast = fast->getLink()->getLink();
        prev = slow;
        slow = slow->getLink();
    }
    if (prev) {
        prev->setLink(slow->getLink());
        delete slow;
    }
}

//9. delete Nth node from end
void LinkedList::deleteNthFromEnd(int n) {
    Node dummy(0);
    dummy.setLink(head);
    Node* fast = &dummy;
    Node* slow = &dummy;
    for (int i = 0; i <= n; ++i) {
        if (!fast) return;
        fast = fast->getLink();
    }
    while (fast) {
        fast = fast->getLink();
        slow = slow->getLink();
    }
    Node* temp = slow->getLink();
    if (temp) {
        slow->setLink(temp->getLink());
        delete temp;
    }
    head = dummy.getLink();
}
