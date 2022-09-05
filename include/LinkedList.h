#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

class Node
{

    public:
        int info;
        Node * next;

        Node(){}
        Node(int data, Node next ): info(data), next(nullptr) {}
        
};

class List
{
    public:
    
    Node *Head;
    Node *Tail;

    

    List(){}
    ~List(){}

        bool isEmpty();
        void addToHead(int data);
        void addToTail(int data);
        void add(int data, Node * pre);
        void removeFromHead();
        void removeFromTail();
        void remove(int data);
        bool search(int data);
        bool retrieve(int data, Node *out);
        void traverse();




};


#endif