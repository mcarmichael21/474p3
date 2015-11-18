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
    
    string command="";
    
    while (command != "q") {
        cout << "$ ";
        cin >> command;
        pm->parse(command);
    }
    
}
