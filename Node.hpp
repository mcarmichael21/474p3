//
//  Node.hpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include "PaintingWrapper.hpp"

using namespace std;

class Node{
    private:
        Node *next;
        PaintingWrapper *pw;
    public:
        Node(PaintingWrapper *p);
        Node *get_next();
        void set_next(Node *n);
        PaintingWrapper *get_pw();
        void set_pw(PaintingWrapper pwrap);
};

#endif /* Node_hpp */