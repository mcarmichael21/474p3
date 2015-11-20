//
//  Node.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "Node.hpp"

Node::Node(PaintingWrapper *p){
    paintingWrapper = p;
    
}

Node *Node::getNextNode(){
    return next;
}

void Node::setNextNode(Node *n){
    next = n;
}

PaintingWrapper *Node::getPaintingWrapper(){
    return paintingWrapper;
}

void Node::setPaintingWrapper(PaintingWrapper p){
    paintingWrapper = &p;
}
