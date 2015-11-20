///
//  main.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include <iostream>
#include <string>
#include "Painting.hpp"
#include "PaintingWrapper.hpp"
#include "LinkedList.hpp"
#include "PaintingManager.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    PaintingManager *pm = new PaintingManager();
    //pm->get_ll().list_all();
    
    string in="";
    bool exit = false;
    
    cout << "Commands: \n l—List all paintings\n 1 . . . 5—Edit a painting\n t—Change the title of the current painting\n a—Change author of the current painting\n s—Save all paintings\n q—Quits the painting manager\n\n";
    while (!exit) {
        cout << "Input: ";
        cin >> in;
        exit = pm->parseData(in);
    }
    
}
