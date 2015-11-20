#ifndef PaintingWrapper_hpp
#define PaintingWrapper_hpp

#include <stdio.h>
#include <string>
#include "Painting.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//Painting Wrapper Class
class PaintingWrapper{
    public:
        PaintingWrapper(int pid);
    
        Painting *operator->() const; 
        Painting& operator*() const; 
    
        int getPaintingID();
        Painting *getPainting();
    
        void setPainting(int i);
    
        void removePainting();
    
        void savePainting();
    
        void print();
    
    private:
        Painting *painting;
        int id;
};

#endif 
