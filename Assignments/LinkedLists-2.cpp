#include <iostream>
using namespace std;

// Class representing a node in a linked list
class Node {
private:
    int value;  
    Node* next;
public:
    Node(int v = 0, Node* n = nullptr) : value(v), next(n) {}

    int getValue() const { return value; }
    
    Node* getNext() const { return next; }

    void setValue(int v) { value = v; }

    void setNext(Node* n) { next = n; }
};

int main() {
    // Create a linked list with three nodes
    Node* one = new Node(1); 
    Node* two = new Node(5); 
    Node* three = new Node(6); 

    // Link the nodes together
    one->setNext(two); 
    two->setNext(three); 

    // Traverse the list and print the values
    Node* current = one; 
    while (current != nullptr) { 
        cout << current->getValue() << " "; 
        current = current->getNext(); 
    }
    cout << endl; 

    delete one; 
    delete two;
    delete three;

    return 0;
    }