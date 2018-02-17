
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
        void reverse();
        void print();
};
