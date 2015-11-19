#ifndef PaintingWrapper_hpp
#define PaintingWrapper_hpp

#include <stdio.h>
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
    
        int getPaintingID();
        Painting *getPainting();
    
        void setPainting();
    
        void removePainting();
    
        void savePainting();
    
        void print();
    
    private:
        Painting *p;
        int pid;
};

#endif /* PaintingWrapper_hpp */
