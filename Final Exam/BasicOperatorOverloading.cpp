#include <iostream>
using namespace std;
class A{
    private:
        int x;
    public:
        A();
        A(int);
        void printValue();
        A operator^(A &a);
};
A::A(){x=0;}
A::A(int n){x=n;}
void A :: printValue(){
    cout<<"Value = "<<x<<endl;
}
A A ::operator^(A &a){
    A temp;
    temp = this->x;
    for(int i =1; i < a.x; i++)
        temp.x*=this->x;
    return temp;
}


class Rectangle{
    private:
        int length; 
        int width;
        string name;
    public:
        Rectangle():length(1), width(2),name("Rectangle 1"){}
        Rectangle(int l, int w, string n):length(l), width(w), name(n){}
        Rectangle operator+(Rectangle &rect){
            Rectangle temp;
            temp.length = this->length + rect.length;
            temp.width = this->width + rect.width;
            return temp;
        }
};

int main(){
    A a1(2),a2(4),a3;
    a3 = a1^a2;
    a3.printValue();

    return 0;
}