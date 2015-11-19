#ifndef Painting_hpp
#define Painting_hpp

#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

class Painting{
    public:
        Painting(string i, string t, string a);
    
        int getID();
    
        void setTitle(string t);
        string getTitle();
    
        void setArtistName(string a);
        string getArtistName();
    
    private:
        int id;                 // This is a unique (integer) identifier for each painting
        string title;           // This is the title of the painting.
        string artistName;      // The first name of the artist who painted the painting.
        char* picture;         // A file containing a picture of the painting in an appropriate format
};

#endif /* Painting_hpp */
