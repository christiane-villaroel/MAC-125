#include <iostream>
using namespace std;

class Shape{
    private:
        int length;
    public:
        void display(int l){

            cout<<"This is a shape"<<endl;
        }
        void hello();
};

class Rectangle:public Shape{
    public:
        void draw(){
            cout<<"Drawing Rectangle"<<endl;
        }
};
class Employee{
    private: 
        string name;
    public:
        Employee(string n){this->name=n;}
        void setname(string& n) {this->name = n;}
        string getName(){return this->name;}
};
class SalariedEmployee: public Employee{
    public:
    SalariedEmployee(string newName):Employee(newName){}
};
class TitleEmployee : public SalariedEmployee{
    private:
        string title;

    public:
        TitleEmployee(string n ): SalariedEmployee(n),title(n){}
        void setTitle(string t){this->title=t;}
        string getTitle(){return this->title;}
};


int main (){
    Rectangle r1;
    TitleEmployee manager("General Manager");
    cout<<"Manager object name: "<<manager.getName()<<endl;
    cout<<"Manager object title "<< manager.getTitle()<<endl;
    
    return 0;
}