#ifndef Painting_hpp
#define Painting_hpp

#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

//Painting Class
class Painting{
    public:
        Painting(string i, string t, string a);
    
        int getID();
    
        void setTitle(string t);
        string getTitle();
    
        void setArtistName(string a);
        string getArtistName();
    
    private:
        int id;                 
        string title;          
        string artistName;      
        char* picture;      
};

#endif
