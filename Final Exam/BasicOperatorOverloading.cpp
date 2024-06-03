#include <iostream>
using namespace std;

class Example {
private:
    int value;
    int othervalue;
public:
    Example(): value(1), othervalue(2) {}
    Example(int v, int o): value(v), othervalue(o) {}

    void print() {
        cout << "value: " << this->value << endl;
        cout << "otherValue: " << this->othervalue << endl;
    }

    // Prefix increment operator overloading
    Example& operator++() {
        cout<<"prefix"<<endl;
        this->value++;
        this->othervalue++;
        return *this;
    }

    // Postfix increment operator overloading
    Example operator++(int) {
        cout<<"postfix"<<endl;
        Example temp = *this;
        this->value++;
        this->othervalue++;
        return temp;
    }
    bool operator> (const Example& ex){
        if(ex.value>this->value)
            return true;
       return false;
    }
};

int main(){
    Example obj1;
    Example obj2 = Example(10,20);
    ++obj1;
    obj1.print();
    obj1++;
    obj1.print();
    if(obj1 > obj2){
        cout<<"Object 1 is greater than Object 2:\t"<<endl;
        obj1.print();

    }
    else{
        cout<<"Object 2 is greater than Object 1:\t"<<endl;
        obj2.print();
    }
    return 0;
}