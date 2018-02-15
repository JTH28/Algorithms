#include <iostream>

//-----------------------------Declarations for Node and LinkedList class

class Node {
    public:
        Node* next;
        int data;

        Node();
        Node(int data);
};

class LinkedList {
    public:
        Node* head;
        Node* tail;
        LinkedList();
        LinkedList(int data);

        void add(int data);
        void remove(int data);
        void print();
};

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
    this -> tail -> next = new Node(d);
    this -> tail = this -> tail -> next;     //Chasing this List tail a little, lol
}                                            //this is just setting the tail pointer
                                             //to the next node after adding a new one
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

void LinkedList::print(){
    Node* list = this -> head;
    while(list){
        std::cout << list -> data << "\n";
        list = list -> next;
    }
}

// A basic 1 2 3 linked list test
int main() {
    LinkedList test(1);
    test.print();
    test.add(2);
    test.add(3);
    test.print();
    test.remove(2);
    test.print();
}
