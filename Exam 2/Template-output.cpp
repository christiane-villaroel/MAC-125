#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printVector(const vector<T>& v){
    for (const auto& elem : v)
    {
        cout<< elem << " ";
    }
    cout<<endl;
    
}
template <class B>
class Box{
    private:
        B var;
    public:
        Box(B v):var(v){}
        void setVar(B v){var=v;}
        B getVar(){return var;}
};

int main (){
    int x =10;int y=20;
    vector<int> vec = {1,2,3,4};
    printVector(vec);
    Box <int> intBox (17);
    cout<<endl;
    cout<<intBox.getVar()<<endl;
    return 0;
}