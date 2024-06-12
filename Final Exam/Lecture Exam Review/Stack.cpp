#include <iostream>
using namespace std;

template<typename C>
class Stack{
    private:
        int counter;
        C* array;
        
    public:
        Stack(C a[], int size):counter(size){
            array = new int [counter];
            for(int i = 0; i < counter; i++){
                array[i]=a[i];
                cout<<array[i]<<", "<<endl;
            }
        }
        void push(C item){
            
            counter+=1;
            C temp[counter];
            for (int i = 0; i < counter; i++)
            {
                temp[i]=array[i];
            }
            temp[counter-1] = item;
            
        }

        void print(){
            for(int i =0; i <counter; i++){
            cout<<array[i]<<", ";
            }
        }
};
int main(){
    int a []= {1,2,3,4};
    int size = 4;
    Stack<int>intStack(a,size);
    return 0;
}