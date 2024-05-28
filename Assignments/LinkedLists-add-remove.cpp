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

void printList(Node* head) {
    Node* current = head;
    cout << "List content: ";
    while (current != nullptr) {
        cout << current->getValue() << " ";
        current = current->getNext();
    }
    cout << endl;
}

void insertHead(Node*& head, int value) {
    head = new Node(value, head);
}
void insertAfter(Node* after, int v){
   after->setNext( (new Node(v,after->getNext())));
}
void removeAfter(Node* after){
    Node* temp = after->getNext();
    after->setNext(after->getNext()->getNext());
    delete temp;
    cout<<"Value: "<<after->getValue()<<endl;;
}

bool find(Node* head, int key){
    Node* temp = head;
    while ( temp != nullptr)
    {  
        if (temp->getValue()==key)
        {
            cout<<"Value found: "<<temp->getValue()<<endl;
            return true;
        }
        temp=temp->getNext();
    }
   return false;  
}
void foundResults(bool f,Node* head){
     if(f){
        cout<<"Key Found!"<<endl;
    }else{
        cout<<"Not Found, node does not exist"<<endl;
        cout<<"Current Node List:\t";
        printList(head);
    }
}
int main() {
    Node* head = nullptr; // Start with an empty list
    
    // Add nodes at the head and print the list
    printList(head);
    insertHead(head, 6);
    printList(head);
    insertHead(head, 5);
    printList(head);
    insertHead(head, 1);
    printList(head);
    insertHead(head,7);
    printList(head);
    insertHead(head,8);
    printList(head);
    //After Function
    Node* after = head->getNext()->getNext();
    cout<<"Insert After Function"<<endl;
    cout<<"Insert Node with Value: "<<4<<endl;
    insertAfter(after,4);
    printList(head);
    //Remover After Function
    cout<<"REMOVER AFTER"<<endl<<endl;
    Node* removeAfterNode = head->getNext()->getNext();// removes node just added
    cout<<"Remove after this node value: "<<removeAfterNode->getValue()<<endl;
    removeAfter(removeAfterNode);
    printList(head);
    //Find Method
    cout<<"FIND"<<endl<<endl;
    int key= 1;
    cout<<"Find this value: "<<key<<endl;
    foundResults(find(head,key),head);
    
    key=3;
    cout<<"\nFind this value: "<<key<<endl;
    foundResults(find(head,key),head);

    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->getNext();
        delete temp;
    }
    return 0;
}