#include "PaintingManager.hpp"

// Create a linked list of 5 PaintingWrappers
PaintingManager::PaintingManager(){
    list = *new LinkedList();
    
    Node *n = new Node(new PaintingWrapper(1));
    list.setHead(n);
    
    Node *n1 = new Node(new PaintingWrapper(2));
    list.getHead()->setNextNode(n1);
    
    Node *n2 = new Node(new PaintingWrapper(3));
    list.getHead()->getNextNode()->setNextNode(n2);
    
    Node *n3 = new Node(new PaintingWrapper(4));
    list.getHead()->getNextNode()->getNextNode()->setNextNode(n3);
    
    Node *n4 = new Node(new PaintingWrapper(5));
    list.getHead()->getNextNode()->getNextNode()->getNextNode()->setNextNode(n4);
    
    // set index of ids to be replaced next
    previous = 0;
    current = 0;
    
    ids[0] = 0;
    ids[1] = 0;
    
}

//Retrieves LinkedList
// LinkedList PaintingManager::getList(){
//     return list;
// }

//Parses input
bool PaintingManager::parseData(string input){
    if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5") {
        // load paintings
        fileToMem(atoi(input.c_str()));
    }else if(input == "l"){
        // list all paintnings
        printAll();
    }else if(input == "t"){
        // change the title
        changeTitle();
    }else if(input == "a"){
        // change the artist
        changeArtist();
    }else if(input == "s"){
        // save all paintings
        list.writeToFile();
    }else if(input == "q"){
        //quit
        return true;
    }
    return false;
}

//Print all
void PaintingManager::printAll(){
    Node *n = list.getHead();
    while (n != NULL) {
        n->getPaintingWrapper()->print();
        n = n->getNextNode();
    }
}

//Writes to mem
void PaintingManager::fileToMem(int painting){
    int i;
        if (ids[previous] != 0) {
            Node *n = list.getHead();
            for (i=1; i<ids[previous]; i++) {
                n = n->getNextNode();
            }
            delete n->getPaintingWrapper()->getPainting();
            n->getPaintingWrapper()->setPainting(0);
            
        }
        Node *n = list.getHead();
        
        for (i=1; i<painting; i++) {
            n = n->getNextNode();
        }
        n->getPaintingWrapper()->setPainting(1);
        
        ids[previous] = painting;
        current = previous;
        previous = (previous+1)%2;
}

//Change title of painting
void PaintingManager::changeTitle(){
    cout << "Enter The New Title: ";
    string t;
    cin >> t;
    Node *n = list.getHead();
    int i;
    for (i=1; i<ids[current]; i++) {
        n = n->getNextNode();
    }
    n->getPaintingWrapper()->getPainting()->setTitle(t);
    n->getPaintingWrapper()->print();
}

//Change artist of painting
void PaintingManager::changeArtist(){
    cout << "Enter The New Artist: ";
    string a;
    cin >> a;
    Node *n = list.getHead();
    int i;
    for (i=1; i<ids[current]; i++) {
        n = n->getNextNode();
    }
    n->getPaintingWrapper()->getPainting()->setArtistName(a);
    n->getPaintingWrapper()->print();
}
