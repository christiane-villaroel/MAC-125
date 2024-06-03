#include <iostream>
using namespace std;
int sum(int x);
int f(int x);
int main (){
    int number=5;
    cout<<f(number);
    return 0;
}
int sum(int x){
    if(x<2)
        return 1;
    else
        return x+sum(x-1);
}

int f(int x){
    if(x<2)
        return 1;
    else 
        return f(x-1)*f(x-2)+1;
}
