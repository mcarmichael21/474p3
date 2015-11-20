#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include "Node.hpp"

using namespace std;

class LinkedList{
    private:
        Node *head;
    public:
    
        LinkedList();
    
    
        Node *getHead();
        void setHead(Node *node);
    
        void writeToFile();
};


#endif /* LinkedList_hpp */
