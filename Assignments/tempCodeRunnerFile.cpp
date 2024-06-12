#include <iostream>
using namespace std;
/***** Declaration Section *****/
class Rectangle{
    private:
        int width, length, area;
        char name;
    public:
        Rectangle();
        Rectangle(int w, int l, char n);
        Rectangle operator+(Rectangle& r);
        void setArea(int w,int l);
        int getArea();
        void setName(char n);
        char getName();
        void displayInfo();
        bool operator< (Rectangle& r);        
};

/***** Implementation section *****/
Rectangle :: Rectangle():length(2), width(1),area(length*width),name('X') {};
Rectangle :: Rectangle(int w, int l,char n):width(w),length(l),area(width*length),name(n){};
Rectangle Rectangle :: operator+(Rectangle& r){
    Rectangle temp;
    temp.length=this->length+r.width;
    temp.width=this->width+r.length;
    return temp;
};

void Rectangle::setArea(int w, int l) {area=w*l;}
int Rectangle ::getArea(){return this->area;}
void Rectangle :: setName(char n){name = n;}
char Rectangle :: getName(){return name;}
void Rectangle::displayInfo(){
    cout<<"****** Display Info ******"<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Width: "<<this->width<<endl;
    cout<<"Length: "<<this->length<<endl;
    cout<<"Area: "<<this->area<<endl;
};
bool Rectangle :: operator<(Rectangle& r){
    return (this->area<r.area);
}

template <typename T>
T& largest( T& a, T& b, T& c){
    T& Max = a;
    if((b.getArea()>a.getArea())&& (b.getArea()>c.getArea()))
        return Max = b;
    if ((c.getArea()>a.getArea())&&(c.getArea()>b.getArea()))
        return Max = c;

    return Max;
    
}
template<typename D>
class Temp {
    private:
    D name;
    public:
    Temp(D n):name(n){}
    void setName(D n){name=n;}
    void print(){cout<<"template name: "<<name<<endl;}

};


int main(){
    Rectangle x;
    Rectangle y(5,10,'X');
    Rectangle z (30,60,'Z');
    cout<<"RECTANGLE X"<<endl;
    x.displayInfo();
    cout<<"RECTANGLE Y"<<endl;
    y.displayInfo();
    cout<<"RECTANGLE Z"<<endl;
    z.displayInfo();
    
    Rectangle largeRect = largest(x,y,z);
    cout<<"\nThe largest rectangle is "<<largeRect.getName()<<"\n Area: "<<largeRect.getArea() <<endl;
    if(z<x)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    Temp <int> intTemp(2);
    intTemp.print();

   return 0;
}