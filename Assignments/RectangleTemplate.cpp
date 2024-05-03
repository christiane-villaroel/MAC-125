#include <iostream>
using namespace std;
/***** Declaration Section *****/
class Rectangle{
    private:
        int width, length, area;
    public:
        Rectangle();
        Rectangle(int w, int l);
        Rectangle operator+(Rectangle& r);
        void setArea(int w,int l);
        int getArea();
        void displayInfo();
};

/***** Implementation section *****/
Rectangle :: Rectangle():length(2), width(1),area(length*width) {};
Rectangle :: Rectangle(int w, int l):width(w),length(l),area(width*length){};
Rectangle Rectangle :: operator+(Rectangle& r){
    Rectangle temp;
    temp.length=this->length+r.width;
    temp.width=this->width+r.length;
    return temp;
};

void Rectangle::setArea(int w, int l) {area=w*l;}
int Rectangle ::getArea(){return this->area;}
void Rectangle::displayInfo(){
    cout<<"****** Display Info ******"<<endl;
    cout<<"Width: "<<this->width<<endl;
    cout<<"Length: "<<this->length<<endl;
    cout<<"Area: "<<this->area<<endl;
};

template <class T>
void print(T&a, T& b){
    cout <<"a: "<<a<<"\nb: "<<b<<endl;
}
template <>
Rectangle largest<Rectangle>(Rectangle& r1, Rectangle& r2){
    Rectangle max = r1;
    
}



int main(){
    Rectangle x;
    Rectangle y(5,10);
    int val1=20, val2=34;
    cout<<"RECTANGLE X"<<endl;
    x.displayInfo();
    cout<<"RECTANGLE Y"<<endl;
    y.displayInfo();

    cout<<"largest rectangle: "<<largerObj(x.getArea(),y.getArea())<<endl;
    
    return 0;
}