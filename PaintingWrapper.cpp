#include "PaintingWrapper.hpp"

//Constructor
PaintingWrapper::PaintingWrapper(int i){
    painting = NULL;
    id = i;
}

//Smart pointer operation
Painting& PaintingWrapper::operator*() const{
    return *painting;
}

//Load files into memory
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

//Retrieves painting id
int PaintingWrapper::getPaintingID(){
    return id;
}

//Retrieves Painting id
Painting *PaintingWrapper::getPainting(){
    return painting;
}

//Sets the current painting
void PaintingWrapper::setPainting(int i){
    if(i){
        painting = operator->();
    }else{
        painting = NULL;
    }
    
}

//Saves the painting to its file
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

//Prints the paintings to screen

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
