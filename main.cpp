#include <iostream>
#include <string>
#include "Painting.hpp"
#include "PaintingWrapper.hpp"
#include "LinkedList.hpp"
#include "PaintingManager.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Variables to exit and read in input
    string in="";
    bool exit = false;

    //PaintingManager instantiation
    PaintingManager *pm = new PaintingManager();
    
    cout << "Commands: \n l—List all paintings\n 1 . . . 5—Edit a painting\n t—Change the title of the current painting\n a—Change author of the current painting\n s—Save all paintings\n q—Quits the painting manager\n\n";
    do {
        //Read in input 
        cout << "Input: ";
        cin >> in;
        //Controller parses data
        exit = pm->parseData(in);
    }while (!exit);
    
}
