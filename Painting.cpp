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
    id = stoi(i);
}

int Painting::get_id(){
    return id;
}

string Painting::get_artistName(){
    return artistName;
}

string Painting::get_title(){
    return title;
}

void Painting::set_title(string t){
    title = t;
}

void Painting::set_artistName(string a){
    artistName = a;
}