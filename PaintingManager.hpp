//
//  PaintingManager.hpp
//  Project3
//
//  Created by Matthew Carmichael on 11/17/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#ifndef PaintingManager_hpp
#define PaintingManager_hpp

#include <stdio.h>
#include "LinkedList.hpp"
#include <cstdlib>

class PaintingManager{
public:
    PaintingManager();
    LinkedList get_ll();
    void fileToMem(int i);
    int parseData(string input);
    void change_title();
    void change_artist();
private:
    LinkedList ll;
    int ids[2];
    int update;
    int current;
};

#endif /* PaintingManager_hpp */
