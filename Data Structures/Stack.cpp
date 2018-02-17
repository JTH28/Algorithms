#include <iostream>
#include "LinkedList.h"

class Stack {
    private:
        LinkedList* list;
    public:
        Stack();
        void push(int d);
        int pop();
        void print();
};

Stack::Stack(){
    list = new LinkedList();
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
    Stack stl = Stack();
    stl.push(1);
    stl.push(2);
    stl.push(3);
    stl.print();
}
