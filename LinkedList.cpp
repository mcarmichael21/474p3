//
//  LinkedList.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "LinkedList.hpp"

void LinkedList::writeToFile(){
    Node *n = head;
    while (n != NULL) {
        n->getPaintingWrapper()->savePainting();
        n = n->getNextNode();
    }
}

LinkedList::LinkedList(){
    head = NULL;
}

Node *LinkedList::getHead(){
    return head;
}

void LinkedList::setHead(Node *node){
    head = node;
}
