//
//  Node.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "Node.hpp"

Node::Node(PaintingWrapper *p){
    pw = p;
    
}

Node *Node::get_next(){
    return next;
}

void Node::set_next(Node *n){
    next = n;
}

PaintingWrapper *Node::get_pw(){
    return pw;
}

void Node::set_pw(PaintingWrapper pwrap){
    pw = &pwrap;
}
