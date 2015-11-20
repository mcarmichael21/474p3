
#include "Node.hpp"

//Constructor
Node::Node(PaintingWrapper *p){
    paintingWrapper = p;
    
}

//Gets the next node
Node *Node::getNextNode(){
    return next;
}

//Sets the next node
void Node::setNextNode(Node *n){
    next = n;
}

//Retrieves Painting Wrapper
PaintingWrapper *Node::getPaintingWrapper(){
    return paintingWrapper;
}

//Sets the painting wrapper
void Node::setPaintingWrapper(PaintingWrapper p){
    paintingWrapper = &p;
}
