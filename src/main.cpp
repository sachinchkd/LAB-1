
#include "LinkedList.h"
using namespace std;



int main()
{
    
    List L;
    Node * ptr;
    
    if(L.isEmpty())
    {
        cout << "                  The list is empty                   \n" << endl;
    }
    else
    {
        cout << "                  The list is not empty                  \n " << endl;
    }


    cout << "-------------------- Adding to head-------------------- "<<endl;
    L.addToHead(53);
    L.traverse();

    cout << "\n-------------------- Adding to Tail-------------------- "<<endl;
    L.addToTail(3);
    L.traverse();

    cout << "\n-------------------- Searching-------------------- "<<endl;
    L.search(3);
    L.search(4);
    

     if(L.isEmpty())
    {
        cout << "                  The list is empty                   \n" << endl;
    }
    else
    {
        cout << "                  The list is not empty                  \n " << endl;
    }
    
    cout << "\n-------------------- Retriving data-------------------- "<<endl;
    if(L.retrieve(5,ptr))
    {
        L.add(31,ptr);
    }
    else
    {
        cout << "                   The data not found                   " << endl;
    }

    L.traverse();

    cout << "\n-------------------- Removing from head-------------------- "<<endl;
    L.removeFromHead();

    cout << "\n-------------------- Removing from tail-------------------- "<<endl;
    L.removeFromTail();

    cout << "\n-------------------- Removing data-------------------- "<<endl;
    L.remove(3);
    

   
    
    

}
