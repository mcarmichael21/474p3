#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include "Node.hpp"

using namespace std;

class LinkedList{
    private:
        Node *front;
    public:
    
        LinkedList();
    
        void printAll();
    
        Node *getHead();
        void setHead(Node *node);
    
        void writeToFile();
};


#endif /* LinkedList_hpp */
