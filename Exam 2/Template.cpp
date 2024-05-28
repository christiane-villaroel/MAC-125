#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename B>
B square(B x){
    return x*x;
}
template <class P>
 class Pair{
    private:
        P variable;
    public:
        Pair( P var): variable(var){};
        P getVariable(){return variable;}
        void setVariable(P var){this->variable=var;}
};



int main (){
    int x = 10 , y =20;
    swapValues(x,y);

    cout<<"x = "<< x <<", y = "<< y <<endl;    
  //  cout <<square(string("A"))<<endl;
    int number =15;
    Pair <int> intPair(number);
    cout<<"intPair Variable: "<<intPair.getVariable();

    return 0;
}