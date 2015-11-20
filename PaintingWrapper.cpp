//
//  PaintingWrapper.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "PaintingWrapper.hpp"

PaintingWrapper::PaintingWrapper(int i){
    painting = NULL;
    id = i;
}

Painting& PaintingWrapper::operator*() const{
    return *painting;
}

Painting* PaintingWrapper::operator->() const{
    string content[3];
    string fileName;
    stringstream ss;
    int i;
    
    if (painting == NULL) {
        
        ss << id;
        fileName = ss.str()+".txt";
        ifstream iFile(fileName.c_str());
        
        /* While there is still a line. */
        for (i=0; i<3; i++) {
            getline(iFile, content[i]);
        }
        
        iFile.close();
        
        return new Painting(content[0], content[1], content[2]);
    }else{
        return painting;
    }
    
}



int PaintingWrapper::getPaintingID(){
    return id;
}

Painting *PaintingWrapper::getPainting(){
    return painting;
}

void PaintingWrapper::setPainting(int i){
    if(i){
        painting = operator->();
    }else{
        painting = NULL;
    }
    
}

void PaintingWrapper::savePainting(){
    string fileName;
    stringstream ss;
    string content;
    
    if (painting != NULL) {
        
        ss << id;
        
        fileName = ss.str()+".txt";

        remove(fileName.c_str());
        ofstream oFile(fileName.c_str());
        content = ss.str()+"\n"+painting->getTitle()+"\n"+painting->getArtistName();
        oFile << content;
        
        oFile.close();
    }
}

void PaintingWrapper::print(){
    Painting *p;
    stringstream ss;
    
    if (painting == NULL) {
        p = operator->();
    }else{
        p = painting;
    }
    
    ss << p->getID();
    
    cout << "ID: "+ss.str()+"\n";
    cout << "Title: "+p->getTitle()+"\n";
    cout << "Artist: "+p->getArtistName()+"\n";
}
