#include <iostream>
using namespace std;

/************ Declaration Section ******************/
class Rectangle {
private:
    int width, length;
public:
    Rectangle();
    Rectangle(int w, int l);
    void printArea();
    void displayInfo();
    Rectangle operator+(Rectangle& r);
    Rectangle operator+(int value); // Operator overload declaration
};
/************ Implementation Section ******************/
Rectangle::Rectangle() { width = 1, length = 2; }
Rectangle::Rectangle(int w, int l) { width = w, length = l; }
void Rectangle::printArea() {
    cout <<"Area of "<< this <<" = "<< width * length << endl;
}
void Rectangle::displayInfo() {
    cout << "I am a " << width << "x" << length << " rectangle "
         << "with id " << this << endl;
}
Rectangle Rectangle::operator+(Rectangle& r) {
    Rectangle temp;
    temp.width = this->width + r.width;
    temp.length = this->length + r.length;
    return temp;
}
/***************** Main Section *********************/
int main() {
    Rectangle r1, r2(5, 7), r3;
    r1.displayInfo();
    r2.displayInfo();
    r3.displayInfo();
    r3 = r1 + r2;
    r3.displayInfo();

    r1.printArea();
    r2.printArea();
    r3.printArea();
    return 0;
}