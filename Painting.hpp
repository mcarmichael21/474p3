//
//  Painting.hpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#ifndef Painting_hpp
#define Painting_hpp

#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

class Painting{
    public:
        Painting(string i, string t, string a);
    
        int get_id();
    
        void set_title(string t);
        string get_title();
    
        void set_artistName(string a);
        string get_artistName();
    
    private:
        int id;                 // This is a unique (integer) identifier for each painting
        string title;           // This is the title of the painting.
        string artistName;      // The first name of the artist who painted the painting.
        char* picture;         // A file containing a picture of the painting in an appropriate format
};

#endif /* Painting_hpp */
