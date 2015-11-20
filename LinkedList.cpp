
#include "LinkedList.hpp"

//Writes newly modified paintings to their files
void LinkedList::writeToFile(){
    Node *n = head;
    while (n != NULL) {
        n->getPaintingWrapper()->savePainting();
        n = n->getNextNode();
    }
}

//Constructor
LinkedList::LinkedList(){
    head = NULL;
}

//Get head of the linked list
Node *LinkedList::getHead(){
    return head;
}

//Set the head of the linked list
void LinkedList::setHead(Node *node){
    head = node;
}
