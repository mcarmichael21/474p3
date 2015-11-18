//
//  LinkedList.hpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

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
    
        void list_all();
    
        Node *get_front();
        void set_front(Node *n);
    
        void save_all();
};


#endif /* LinkedList_hpp */
