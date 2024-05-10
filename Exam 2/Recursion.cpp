#include <iostream>
using namespace std;
//RECURSION
/* 
    Write a program that uses a function sum(int) that takes as an argument a positive integer
n and returns the sum of the first n positive integers. Use a while loop. Then write a
recursive function that performs the same task
 */


int sum(int n){
    int totalSum=0;
    if(n <= 1)
        return 1;
    else{
       return totalSum= n + sum(n-1);
    }
}

/* 
Write a program that uses a function power(base,exponent) which when invoked returns
baseexponent
*/
int power(int base, int exponent){
    if (exponent <=1){
        return 5;
    }
   // cout<<"base: "<<base<<"\texponent: "<<exponent<<endl;
    int result = base * power(base,exponent-1);
    cout<<"result "<< result<<endl;
    return result;
}
//GET DEVISOR CLASS EXAMPLE
void get_divisors(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<i<<",";
            get_divisors(n/i);
            return ;
        }
    }
    cout<<n;
    
}
/*CONVERT TO BINARY
Write an iterative version of the
 ’convert to binary’ program.
 */
void toBinary(int n){
    int quotient = n;
    if(quotient/2==0){
        cout<<n%2;
    }
    else{
        toBinary(quotient/2);
        cout<<quotient%2;
    } 
}
int loopSum(int n){
    int sum =0;
    while (n>0)
    {
        sum +=n;
        
        n--;
    }
    return sum;
}

int recursiveSum(int n){
    int sum=n;
    if (n<=1)
    {
        return 1;
    }
    else{
        sum+=recursiveSum(--n);
    }
    return sum;
    
}
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
   /*  cout<<sum(5)<<endl;
    cout << power(5,4)<<endl;
    toBinary(4);
    cout<<endl; */
    cout<<loopSum(5)<<endl;
    cout<<"recursive sum:";
    cout<<recursiveSum(5)<<endl;
    recursive(123);

    return 0;
}