#ifndef PaintingManager_hpp
#define PaintingManager_hpp

#include <stdio.h>
#include "LinkedList.hpp"
#include <cstdlib>

class PaintingManager{
public:
    PaintingManager();
    LinkedList get_ll();
    bool parseData(string input);
    void fileToMem(int painting);
    void changeTitle();
    void changeArtist();
    void printAll();
private:
    LinkedList ll;
    int ids[2];
    int previous;
    int current;
};

#endif /* PaintingManager_hpp */
