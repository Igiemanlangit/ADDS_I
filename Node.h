#ifndef NODE_H
#define NODE_H

class Node
{
    private:
    int data;
    Node* link;

    public:
    
    //constructor
    Node(int data);
    
    //focus on data member
    int getData();
    void setData(int data);

    //focus on link member;
    Node* getLink();
    void setLink(Node* next);
};

#endif 