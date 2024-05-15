#include <iostream>
using namespace std;
class Person{
    public:
        Person(){ cout<<"New Person created"<<endl;}
        virtual void sayHello() const{
            cout<<"Hello, I am a person"<<endl;
        }
        virtual void sayHello(string& name) const {
            cout<<"Hello I am "<<name<<". I am a Person object."<<endl;
        }
};
class Student :public Person{
    public:
        Student(){cout<<"Hello I am a Student"<<endl;}
        void sayHello()const override{
            cout<<"Hello, I am a Student"<<endl;
        }
        void sayHello(string& name) const override{
            cout<<"Hello I am "<<name<<".I am a Student Object"<<endl;
        }
};



int main(){
    Person* person1 = new Person();
    Person* student1 = new Student();
    Student* student2 = new Student();
    string name1 = "Bruce Wayne";
    string name2 = "Michel M";
    string name3 = "Steve B";
    cout<<"*****PERSON OBJECT*****"<<endl;
    person1->sayHello();
    person1->sayHello(name1);
    cout<<"*****STUDENT OBJECT*****"<<endl;
    student1->sayHello();
    student2->sayHello(name2);
    cout<<"*****STUDENT OBJECT/Pointer*****"<<endl;
    student2->sayHello();
    student2->sayHello(name3);

    return 0;
}