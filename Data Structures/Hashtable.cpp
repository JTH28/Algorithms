#include <iostream>
#include <cmath>

class Node {
    public:
        Node* prev;
        Node* next;
        std::string str;

        Node(std::string str);
};

class Hashtable {
    private:
        Node* container[107];
    public:
        Hashtable();
        long hash(std::string str);
};

long Hashtable::hash(std::string str) {
    long ret = 0;

    for(int i = 0; i < str.length(); i++){
        ret += str[i] * pow(31, i);
    }

    return ret % 107;
}

Hashtable::Hashtable(){
    Node* container[107];
}

int main(){
    std::string str = "a"; //Blarg
    Hashtable ht = Hashtable();
    std::cout << ht.hash(str);
}
