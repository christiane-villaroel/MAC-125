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
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->getNext();
            delete temp;
        }
    }
    void insertHead(int value) {
        head = new Node(value, head);
    }
    void insertAfter(Node* after, int value) {
        if (after == nullptr) {
            return;
        }
        after->setNext(new Node(value, after->getNext()));
    }
    void removeAfter(Node* after) {
        if (after == nullptr || after->getNext() == nullptr) {
            return;
        }
        Node* temp = after->getNext();
        after->setNext(temp->getNext());
        delete temp;
    }
    bool find(int key) {
        Node* current = head;
        while (current != nullptr) {
            if (current->getValue() == key) {
                return true;
            }
            current = current->getNext();
        }
        return false;
    }
    void printList() {
        Node* current = head;
        cout << "List content: ";
        while (current != nullptr) {
            cout << current->getValue() << " ";
            current = current->getNext();
        }
        cout << endl;
    }
};
class Rectangle{
    private:
        int length,width;
    public:
        Rectangle();
        Rectangle(int l , int w);
};

Rectangle :: Rectangle():length(2),width(1){}
Rectangle :: Rectangle(int l, int w):length(l),width(w){}
template <class T>
T largest(T one, T two, T three){
    T max = one;
    if(max<two)
        max=two;
    if(max<three)
        max=three;
    return max;
}

template<>
Rectangle largest<Rectangle>(Rectangle one, Rectangle two, Rectangle three){
    Rectangle max = one;
    
}



int main() {
    LinkedList list;
    list.printList();
    list.insertHead(6);
    list.printList();
    list.insertHead(5);
    list.printList();
    list.insertHead(1);
    list.printList();
    return 0;
}