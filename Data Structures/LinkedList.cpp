#include <iostream>
#include "LinkedList.h"

//-----------------------------overloaded constructor for Node

Node::Node(){
    this -> data = 0;
    this -> next = NULL;
}

Node::Node(int d){
    this -> data = d;
    this -> next = NULL;
}

//-----------------------------overloaded constructor for LinkedList

LinkedList::LinkedList(){
    this -> head = new Node();
    this -> tail = head;
}

LinkedList::LinkedList(int d){
    this -> head = new Node(d);
    this -> tail = head;
}



void LinkedList::add(int d){
    Node newNode = Node(d);
    newNode.next = this -> head;
    this -> head = &newNode;
}

void LinkedList::remove(int d){
    Node* cur = this -> head;
    Node* prev = nullptr;

    if(cur -> data == d){
        this -> head = cur -> next;
        delete(cur);
    }

    while(cur){
        if(cur -> data == d){
            prev -> next = cur -> next;
        }
        prev = cur;
        cur = cur -> next;
    }
}

void LinkedList::reverse(){
    Node* prev   = nullptr;
    Node* cur    = this -> head;
    Node* next   = cur != nullptr ? cur -> next : nullptr;

    while(cur){
        next = cur -> next;

        cur -> next = prev;
        prev = cur;
        cur = next;
    }
    this -> head = prev;
}

void LinkedList::print(){
    Node* list = this -> head;
    while(list){
        std::cout << list -> data << "\n";
        list = list -> next;
    }
}

/*
// A basic 1 2 3 linked list test
int main() {
    LinkedList test(1);
    //test.print();
    test.add(2);
    test.add(3);
    //test.print();
    //test.remove(2);
    //test.print();
    test.reverse();
    test.print();
}
*/
