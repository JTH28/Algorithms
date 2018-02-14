#include <iostream>

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
        void print();
};

Node::Node(){
    this -> data = 0;
    this -> next = NULL;
}

Node::Node(int d){
    this -> data = d;
    this -> next = NULL;
}

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
    this -> tail = this -> tail -> next;
}

void LinkedList::print(){
    Node* list = this -> head;
    while(list){
        std::cout << list -> data << "\n";
        list = list -> next;
    }
}

int main() {
    LinkedList test(1);
    test.print();
    test.add(2);
    test.add(3);
    test.print();
}
