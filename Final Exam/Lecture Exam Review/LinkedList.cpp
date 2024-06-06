#include <iostream>
using namespace std;
class Node{
    private:
        int value;
        Node* next;
        
    public:
        Node(int v, Node* n=nullptr):value(v),next(n){}
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
        void insertHead(int value){
            head = new Node(value,head);
        }
         void printList(){
            Node* current = head;
            while(current!=nullptr){
                cout<<current->getValue()<<" ";
                current=current->getNext();
            }
        }
        void insertAfter(int value,Node* after){
            Node* temp = head;
            while(temp!=nullptr){
                if(temp->getValue()==after->getValue())
                    after->setNext(new Node(value,after->getNext()));
                
                temp = temp->getNext();
            }
        }
        Node* getNode(int value){
            Node* temp = head;
            
            while(temp!=nullptr){
                if(temp->getValue()==value)
                    return temp;
                temp=temp->getNext();
            }
            return head;
        }
        void deletNode(Node* node){
            
            if (node==nullptr)
                    return;
            
            Node* current = head;

            while ( current->getNext()!=node)
            {
                cout<<"value: "<<current->getValue()<<" "<<endl;
                current = current->getNext();
            }
            current->setNext(node->getNext());
            delete node;
        }
        

};


int main (){
    LinkedList list;
    list.insertHead(2);
    list.insertHead(4);
    list.insertHead(7);
    list.insertHead(6);
    list.insertHead(1);
   // list.printList();
    cout<<endl;
    list.insertAfter(8,list.getNode(7));
    //list.printList();
    list.deletNode(list.getNode(4));
    list.printList();
    
    return 0;
}