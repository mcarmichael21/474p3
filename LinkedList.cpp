//
//  LinkedList.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "LinkedList.hpp"


LinkedList::LinkedList(){
    front = NULL;
}

void LinkedList::list_all(){
    Node *n = front;
    while (n != NULL) {
        n->get_pw()->display();
        n = n->get_next();
    }
}

Node *LinkedList::get_front(){
    return front;
}

void LinkedList::set_front(Node *n){
    front = n;
}

void LinkedList::save_all(){
    Node *n = front;
    while (n != NULL) {
        n->get_pw()->save_painting();
        n = n->get_next();
    }
}