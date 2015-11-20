#ifndef PaintingManager_hpp
#define PaintingManager_hpp

#include <stdio.h>
#include "LinkedList.hpp"
#include <cstdlib>

//Painting manager class
class PaintingManager{
    public:
        PaintingManager();
        // LinkedList getList();
        bool parseData(string input);
        void fileToMem(int painting);
        void changeTitle();
        void changeArtist();
        void printAll();
    private:
        LinkedList list;
        int ids[2];
        int previous;
        int current;
};

#endif 
