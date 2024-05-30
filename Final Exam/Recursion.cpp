#include <iostream>
using namespace std;
int f(int x);
int main (){
    int number=4;
    cout<<f(number);
    return 0;
}
int f(int x){
    if(x<2)
        return 1;
    else 
        return f(x-1)*f(x-2)+2;
}