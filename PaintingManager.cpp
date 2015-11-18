//
//  PaintingManager.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/17/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include "PaintingManager.hpp"

PaintingManager::PaintingManager(){
    // Create a linked list of 5 PaintingWrappers
    ll = *new LinkedList();
    
    Node *n = new Node(new PaintingWrapper(1));
    ll.set_front(n);
    
    Node *n1 = new Node(new PaintingWrapper(2));
    ll.get_front()->set_next(n1);
    
    Node *n2 = new Node(new PaintingWrapper(3));
    ll.get_front()->get_next()->set_next(n2);
    
    Node *n3 = new Node(new PaintingWrapper(4));
    ll.get_front()->get_next()->get_next()->set_next(n3);
    
    Node *n4 = new Node(new PaintingWrapper(5));
    ll.get_front()->get_next()->get_next()->get_next()->set_next(n4);
    
    // set index of ids to be replaced next
    update = 0;
    current = 0;
    
}

LinkedList PaintingManager::get_ll(){
    return ll;
}

void PaintingManager::parse(string input){
    if(input.length() == 1){
        switch (input[0]) {
            case 'l':
                ll.list_all();
                break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
                load(stoi(input));
                break;
            case 't':
                change_title();
                break;
            case 'a':
                change_artist();
                break;
            case 's':
                ll.save_all();
                break;
            default:
                break;
        }
    }
}

void PaintingManager::load(int id){
    int i;
        if (ids[update] != 0) {
            Node *n = ll.get_front();
            for (i=1; i<ids[update]; i++) {
                n = n->get_next();
            }
            n->get_pw()->unset_p();
            
        }
        Node *n = ll.get_front();
        
        for (i=1; i<id; i++) {
            n = n->get_next();
        }
        n->get_pw()->set_p();
        
        ids[update] = id;
        current = update;
        update = (update+1)%2;
}

void PaintingManager::change_title(){
    cout << "Enter The New Title: ";
    string t;
    cin >> t;
    Node *n = ll.get_front();
    int i;
    for (i=1; i<ids[current]; i++) {
        n = n->get_next();
    }
    n->get_pw()->get_p()->set_title(t);
    n->get_pw()->display();
}

void PaintingManager::change_artist(){
    cout << "Enter The New Artist: ";
    string a;
    cin >> a;
    Node *n = ll.get_front();
    int i;
    for (i=1; i<ids[current]; i++) {
        n = n->get_next();
    }
    n->get_pw()->get_p()->set_artistName(a);
    n->get_pw()->display();
}