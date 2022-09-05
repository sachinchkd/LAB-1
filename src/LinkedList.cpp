
#include "LinkedList.h"

bool List :: isEmpty()
{
    if(Head == nullptr && Tail == nullptr)
        return true;
    else return false;
}

void List :: addToHead(int data)
{
    Node *newNode = new Node();
    newNode->info = data;
    newNode->next = Head;
    Head = newNode;
    if(Tail == Head)
    {
         Tail = Head;
    } 
    std::cout << "                  "; 
    std::cout << data << " is added to Head                  " <<std::endl;    
}

void List :: addToTail(int data)
{
    Node *newNode = new Node();
    newNode -> info = data;
    newNode->next = nullptr;    
    Node * temp = Head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
    std::cout << "                  "; 
    std::cout << data << " is added to Tail                  " <<std::endl;  
    
    
}   

void List :: add(int data, Node* pre)
{
    Node *newNode = new Node();
    newNode ->info = data;
    newNode->next = pre->next;
    pre->next = newNode;
    
    std::cout << "                  "; 
    std::cout << data << " is added as new node.               " <<std::endl;  
}

void List :: removeFromHead()
{
    if(!isEmpty()){
        Node *NodeToDel = Head;
        Head = NodeToDel->next;
        delete NodeToDel;
        if(Head == Tail)
        {
            Tail = Head;
        }
    }
    std::cout << "                Removed from Head               " <<std::endl;

}

void List :: removeFromTail()
{
    if(!isEmpty()){
        Node *NodeToDel = Tail;
        
            Node *pre = Head;
            while (pre->next != nullptr)
            {
                pre = pre->next;
                std::cout << "ok";
            }
            Tail = pre;
            pre->next = nullptr;
        
        
        delete NodeToDel;
        std::cout << "                Removed from Tail.                " <<std::endl;
    }
    
    
}

void List :: remove(int data)
{
    if(!isEmpty())
    {
        if (Head->info == data){
            removeFromHead();
        }
        else
        {
            Node *temp = Head->next;
            Node *pre = Head;
            while (temp != nullptr)
            {
                if (temp->info == data)
                {
                    break;
                }
                else
                {
                    pre = pre-> next;
                    temp = temp-> next;
                }
                
            }
            
        }
        std::cout << "--------------------";
        std::cout << data << " is removed. --------------------" <<std ::endl;

    }
}

bool List :: search(int d)
{
    Node * temp = Head;
    while (temp != nullptr)
    {
        if(temp->info == d)
        {
            std::cout << "                  "; 
            std::cout << d << "data is Found.                 " << std::endl;
            return true;
        }
        temp = temp -> next;
    }
        std::cout << "                  "; 
            std::cout << d << "data is not Found.                 " << std::endl;
    return false;
    
}

bool List :: retrieve(int d, Node * out)
{
    Node * temp;
    temp = Head;
    while(temp != nullptr && temp->info != d)
    {
        temp = temp -> next;
    }

    if(temp == nullptr)
    {
        return false;
    }
    else
    {
        out = temp;
        return true;
    }
    
}

void List :: traverse()
{
    std::cout << "-------------------- List contains --------------------\n" << std::endl;
    Node * temp = Head;
    while (temp != nullptr)
    {
        std::cout << "                            "; 
        std::cout << temp->info << std::endl;
        temp = temp-> next;
    }
    
}
