#include <iostream>
using namespace std;
void recursive(int n){
    if(n/10==0){
        cout<<n<<endl;
    }
    else{
        cout<<n<<endl;
        cout<<n%10<<endl;
        recursive(n/10); 
    }
}

int main (){
   recursive(123);
  
    return 0;
}