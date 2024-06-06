#include <iostream>
using namespace std;
class Node{
    private:
        Node* next;
        int value;
    public:
        Node(Node* n=nullptr ,int v):next(n),value(v){}
        int getValue(){return value;}
        Node* getNext(){return next;}
        void setValue(int v){value=v;}
        void setNext(Node* n){next=n;}
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList():head(nullptr){}
        void insertHead(int v){
            head = new Node(head, v);
        }
         void printList(){
            Node* current = head;
            while(current!=nullptr){
                cout<<current->getValue()<<endl;
                current=current->getNext();
            }
        }
};


int main (){
    LinkedList list;
    list.insertHead(2);
    list.insertHead(4);
    list.insertHead(7);
    list.insertHead(6);
    list.insertHead(1);
    list.insertHead(9);
    list.printList();
    return 0;
}