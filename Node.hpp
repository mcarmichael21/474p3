#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include "PaintingWrapper.hpp"

using namespace std;

class Node{
    private:
        Node *next;
        PaintingWrapper *paintingWrapper;
    public:
        Node(PaintingWrapper *paintingWrapper);
        Node *getNextNode();
        void setNextNode(Node *n);
        PaintingWrapper *getPaintingWrapper();
        void setPaintingWrapper(PaintingWrapper pwrap);
};

#endif /* Node_hpp */
