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
    void insertTail(int value){
        Node* temp = head;
        while(temp!=nullptr){
            if(temp->getNext()==nullptr){
                temp->setNext(new Node(value,temp->getNext()));
                break;
                }
            temp= temp->getNext();
        }
    }
    int size(){
        Node* current=head;
        int size = 0;
        while(current!=nullptr){
            current = current->getNext();
            size++;
        }
        return size;
    }
};

int main() {
    LinkedList list;
    list.printList();
    list.insertHead(6);
    list.printList();
    list.insertHead(5);
    list.printList();
    list.insertHead(1);
    list.printList();
    list.insertTail(13);
    list.printList();
    cout<<"List size: "<<list.size()<<endl;   
    return 0;
}