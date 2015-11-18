///
//  main.cpp
//  Project3
//
//  Created by Matthew Carmichael on 11/15/15.
//  Copyright © 2015 Redline Studios. All rights reserved.
//

#include <iostream>
#include <string>
#include "Painting.hpp"
#include "PaintingWrapper.hpp"
#include "LinkedList.hpp"
#include "PaintingManager.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Create a linked list of 5 PaintingWrappers
//    LinkedList ll = *new LinkedList();
//    
//    Node *n = new Node(new PaintingWrapper(1));
//    ll.set_front(n);
//    
//    Node *n1 = new Node(new PaintingWrapper(2));
//    ll.get_front()->set_next(n1);
//    
//    Node *n2 = new Node(new PaintingWrapper(3));
//    ll.get_front()->get_next()->set_next(n2);
//    
//    Node *n3 = new Node(new PaintingWrapper(4));
//    ll.get_front()->get_next()->get_next()->set_next(n3);
//    
//    Node *n4 = new Node(new PaintingWrapper(5));
//    ll.get_front()->get_next()->get_next()->get_next()->set_next(n4);
//    
    PaintingManager *pm = new PaintingManager();
    //pm->get_ll().list_all();
    
    string command="";
    
    while (command != "q") {
        cout << "$ ";
        cin >> command;
        pm->parse(command);
    }
    
    
    
    
//    for (i=1; i<6; i++) {
//        PaintingWrapper pw = *new PaintingWrapper(i);
//        Node *newNode = new Node(pw);
//        Node *n = ll.get_front();
//        int i1;
//        for (i1=1; i1<i; i++) {
//            n = n->get_next();
//        }
//        n = newNode;
//        //cout << n->get_pw()->get_pid();
//        cout << n->get_pw()->operator->()->get_title()+"\n";
//    }
    
    //cout << pw->operator->()->get_title();
    //ll.list_all();
    
//    LinkedList ll = *new LinkedList();
    
    
    
}
