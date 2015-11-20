//
//  Painting.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "Painting.hpp"

Painting::Painting(string i, string t, string a){
    title = t;
    artistName = a;
    
    id = atoi(i.c_str());
}

int Painting::getID(){
    return id;
}

string Painting::getArtistName(){
    return artistName;
}

string Painting::getTitle(){
    return title;
}

void Painting::setTitle(string t){
    title = t;
}

void Painting::setArtistName(string a){
    artistName = a;
}
