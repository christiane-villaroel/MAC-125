#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        if(x>3){
            throw 404;
        }
        else{
            for(int i =0; i<4;i++){
                if(menu[x]==menu[i]){
                    cout<<menu[x]<<endl;
                    break;
                }
            }
        }
        
        
    }
    catch (int e) {
        cout<<e<<endl;
        
    }
}