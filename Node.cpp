    #include "Node.h"

    Node::Node(int data)
    {
        this->data = data;
        link = nullptr;
    }
    
    //focus on data member
    int Node::getData()
    {
        return data;
    }
    void Node::setData(int data)
    {
        this->data = data;
    }

    //focus on link member;
    Node* Node::getLink()
    {
        return link;
    }
    void Node::setLink(Node* next)
    {
        link = next;
    }