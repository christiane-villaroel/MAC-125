#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() const {cout<<"Drawing shape"<<endl;}
};
class Square : public Shape{
    public:
        virtual void draw() const override {cout<<"Drawing Square"<<endl;}
};
class Circle : public Shape{
    public:
        virtual void draw() const override {cout<<"Drawign Circle"<<endl;}
};

class Base{
    public:
        Base(){cout<<"Base Constructor"<<endl;}
        virtual ~Base(){cout<<"Base Destructor"<<endl;}
};
class Derived: public Base {
    public:
        Derived(){cout<<"Derived Constructor"<<endl;}
        ~Derived(){cout<<"Derived Destructor"<<endl;}
}; 


int main() {
    Shape* shapes [3];
    shapes[0] = new Shape();
    shapes[1] = new Square();
    shapes[2] = new Circle();

    for (int i = 0; i < 3; i++)
    {
        shapes[i]->draw();
    }
     for (int i = 0; i < 3; i++)
    {
        delete shapes[i];
    }

    Base* ptr = new Derived();     
    delete ptr;
    return 0;
}