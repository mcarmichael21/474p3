//
//  PaintingWrapper.hpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#ifndef PaintingWrapper_hpp
#define PaintingWrapper_hpp

#include <iostream>
#include <string>
#include "Painting.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class PaintingWrapper{
    public:
        PaintingWrapper(int pid);
    
        Painting *operator->() const; // send message to Person object
        Painting& operator*() const; // obtain reference to Person object
    
        int get_pid();
        Painting *get_p();
    
        void set_p(int i);
        
        void save_painting();
    
        void display();
    
    private:
        Painting *p;
        int pid;
};

#endif /* PaintingWrapper_hpp */
