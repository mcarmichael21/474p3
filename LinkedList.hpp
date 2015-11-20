#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include "Node.hpp"

using namespace std;

class LinkedList{
	//Private variable node head
    private:
        Node *head;
    public:
    	//Functions
        LinkedList();
    
    
        Node *getHead();
        void setHead(Node *node);
    
        void writeToFile();
};


#endif 
