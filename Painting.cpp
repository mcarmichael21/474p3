#include "Painting.hpp"

//Constructor
Painting::Painting(string i, string t, string a){
    title = t;
    artistName = a;
    
    id = atoi(i.c_str());
}

//Retrieves ID
int Painting::getID(){
    return id;
}

//Retrieves Artist Name
string Painting::getArtistName(){
    return artistName;
}

//Retrieve Title
string Painting::getTitle(){
    return title;
}

//Sets the title
void Painting::setTitle(string t){
    title = t;
}

//Sets Artist Name
void Painting::setArtistName(string a){
    artistName = a;
}
