#include <iostream>
using namespace std;
class Animal{
    public:
     virtual void makeNoise() =0;
     string name;
     Animal(string& n):name(n){}
};
class Dog: public Animal{
    public:
        Dog(string n):Animal(n){}
        virtual void makeNoise()override{cout<<"Woof!"<<endl;}
};
class Cat: public Animal{
     public:
        Cat(string n):Animal(n){}
        virtual void makeNoise()override{cout<<"Meow!"<<endl;}
};

int main(){
    Cat cat1 ("Fluffy");
    Dog dog1("Lassie");
   

    return 0;
}