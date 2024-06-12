#include <iostream>
using namespace std;
template <typename T>
void reverseArray(T array[],int size){
    int i =0, j=size-1;
    while (i<j)
    {
        T left = array[i];
        T right = array[j];
        array[i]=right;
        array[j]=left;
        j--;
        i++;
    }
    
}

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
    const int SIZE = 4;
    int array[SIZE] = {1,2,3,4};
    string name = "steve";
    const int stringSize = name.length();
    int* a = new int[2];

    
    reverseArray(array,SIZE);
    reverseArray(&name, stringSize);
    for (int i = 0; i < 4; i++)
    {
        cout<<array[i] <<", ";
    }
    for(int i = 0; i < stringSize;i++)
        cout<<name[i]<<", ";
    int b[] = {1,2,3,4};
    Stack <int> intStack(b,SIZE);
    intStack.print();
    cout<<"hello"<<endl;
    return 0;
}