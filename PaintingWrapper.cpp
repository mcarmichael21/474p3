//
//  PaintingWrapper.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "PaintingWrapper.hpp"

PaintingWrapper::PaintingWrapper(int id){
    p = NULL;
    pid = id;
}

int PaintingWrapper::get_pid(){
    return pid;
}

Painting *PaintingWrapper::get_p(){
    return p;
}

void PaintingWrapper::set_p(){
    p = operator->();
}

void PaintingWrapper::unset_p(){
    delete p;
    p = NULL;
}

Painting* PaintingWrapper::operator->() const{
    
    if (p == NULL) {
        
        stringstream out;
        out << pid;
        
        string fileName = out.str()+".txt";
        ifstream iFile(fileName.c_str());
        string id, title, artist;
        
        /* While there is still a line. */
        getline(iFile, id);
        getline(iFile, title);
        getline(iFile, artist);
        
        iFile.close();
        
        return new Painting(id, title, artist);
    }else{
        return p;
    }
    
}

void PaintingWrapper::save_painting(){
    if (p != NULL) {
        
        stringstream out;
        out << pid;
        
        string fileName = out.str()+".txt";

        remove(fileName.c_str());
        ofstream oFile(fileName.c_str());
        string content = out.str()+"\n"+p->get_title()+"\n"+p->get_artistName();
        oFile << content;
        
        oFile.close();
    }
}

void PaintingWrapper::display(){
    Painting *tp;
    if (p == NULL) {
        tp = operator->();
    }else{
        tp = p;
    }
    
    stringstream out;
    out << tp->get_id();
    
    cout << out.str()+"\n";
    cout << tp->get_title()+"\n";
    cout << tp->get_artistName()+"\n";
}
