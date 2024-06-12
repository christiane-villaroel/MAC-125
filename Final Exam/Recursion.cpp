#include <iostream>
using namespace std;
int sum(int x);
int f(int x);
int factorial(int n);
int main (){
    int number=5;
    string str = "car";
    int i = 0; int j = str.length()-1;

    string strCopy= str;
    cout<<strCopy<<endl;
    cout<<factorial(number);
    while (i < str.length())
    {
        if(str[i]==str[j]){
           strCopy= strCopy.substr(1,(strCopy.length()-2));
           cout<<strCopy<<endl;
        }
        else
            return false;
    
        i++;
        j--;
    }
    
    return 0;
}
/* int sum(int x){
    if(x<2)
        return 1;
    else
        return x+sum(x-1);
} */

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int f(int x){
    if(x<2)
        return 1;
    else 
        return f(x-1)*f(x-2)+1;
}
