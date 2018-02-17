#include <iostream>
#include "LinkedList.h"

class Stack {
    private:
        LinkedList* list;
    public:
        Stack();
        Stack(int d);
        void push(int d);
        int pop();
        void print();
};

Stack::Stack(){
    list = new LinkedList();
}

Stack::Stack(int d){
    list = new LinkedList(d);
}

void Stack::push(int d){
    this -> list -> add(d);
}

int Stack::pop(){
    int data = this -> list -> head -> data;
    this -> list -> head = this -> list -> head -> next;
    list -> remove(data);
    return data;
}

void Stack::print(){
    this -> list -> print();
}

int main(){
    Stack stl = Stack(1);
    stl.push(2);
    stl.push(3);
    stl.push(4);
    stl.print();
    stl.pop();
    stl.print();
}
