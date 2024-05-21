#include <iostream>
using namespace std;

class Node {
private:
    int value;
    Node* next;
public:
    Node(int v, Node* n = nullptr) : value(v), next(n) {}
    int getValue() const { return value; }
    Node* getNext() const { return next; }
    void setValue(int v) { value = v; }
    void setNext(Node* n) { next = n; }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void printList() const {
        Node* current = head;
        cout << "List content: ";
        while (current != nullptr) {
            cout << current->getValue() << " ";
            current = current->getNext();
        }
        cout << endl;
    }

    void insertHead(int value) {
        head = new Node(value, head);
    }

    void insertAfter(Node* after, int value) {
        if (after == nullptr) return;
        after->setNext(new Node(value, after->getNext()));
    }

    void removeAfter(Node* after) {
        if (after == nullptr || after->getNext() == nullptr) return;
        Node* temp = after->getNext();
        after->setNext(temp->getNext());
        delete temp;
    }

    bool find(int key) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->getValue() == key) return true;
            current = current->getNext();
        }
        return false;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->getNext();
            delete temp;
        }
    }
};

int main() {
    LinkedList list; // Create a LinkedList object
    // Add nodes at the head and print the list
    Node(3);
    list.printList();
    list.insertHead(6);
    list.printList();
    list.insertHead(5);
    list.printList();
    list.insertHead(1);
    list.printList();
    list.insertAfter(list.find(1), 8); // Assuming findNode is a function that returns a Node* given a value
    list.printList();
    list.removeAfter(list.find(1)); // Assuming findNode is a function that returns a Node* given a value
    list.printList();
    int value = 7;
    if(list.find(value))
        cout << "Found " << value << endl;
    else
        cout << "Did not find " << value << endl;

    return 0;
}
