# MAC 125
 Advanced C++, learning about 
- Classes
- Call by references
- Pointers
- Inheritance
- Polymorphism
- Recursion
- function overloading
- Templates

 ## Call by Reference:
- read more on passing reference as a parameter

# Function Overloading:

Two functions with the same name but different parametes
computer tells them apart b/c they have different args or the number of parameters.

Two ways to overload, type of parameter and the number of parameter

The return type is irreleveant in overloading
```
void foo(int x){ 
    cout<<x+2;

}

void foo(double x){
    cout <<"double: "<<x<<endl;
}

int main(){
    int a=5;
    foo(a);
    

    return 1;
}
```

Here we have two functions with same name and difference data types as arg, by passing the a(int typ), in the foo() call, then C++ will run the function with the data type of int.

## Casting/Conversion :

character to an integer, convert to a character asky conversion

C++ will find the possible conversion in function overloading if it cannot find the function matching the data type
char-> convert to double or int
string -> cant be converted to double or int.

## passing double type as func foo(int x)

You can pass a double data type, however C++ will lose it's precision and remove the decimal point. IT WILL NOT ROUND the data type, just remove the decimal completely
```
void foo(int x){ 
    cout<<x+2;

}



int main(){
    int a=5.6;
    foo(a);
    

    return 1;
}
```

console output `7`
### CPP File code:
#include <iostream>
using namespace std;
//reference type: Providing location/address of the value instead of passing the value
//references in the foo func is now a parameter

// number is now a reference to an integer
void foo(int x){ 
    cout<<x+2;

}
void foo(int &x){
    cout<< x+3 <<endl;
}
/* void foo(double x){
    cout <<"double: "<<x<<endl;
} */

int main(){
    int a=5;
    foo(5);


    return 1;
}


# Arrays:

Allows us to store multiple values of the same type
It is a collection of data.

Arrays need a consecutive memory space. All

## Array Practice Problem:

*sizeof()*-> Tells use how much memory a data is taking.

how to find size of the array?
by diving by the size of the type or size of the first element.

`
    int a[]={2,4,7,3,9,1};
    int size= sizeof(a)/sizeof(0);
    cout <<size;
`

### Array Practice Problem Solution:
#include <iostream>
using namespace std;

int linearSearch(int array[],int size,int key);
/* Write a function definition LinearSearch(. . . .) to perform a linear search of an array. The
function should receive an integer array and the size of the array as arguments, and the key.
If the search key is found, return the array index; otherwise, return -1. Make sure you use the
proper function return type and argument list. Just write the function definition. You do not
need to write a complete C++ program.
 */

int main(){
   
    int a[]={2,4,7,3,9,1};
    int size= sizeof(a)/sizeof(a[0]);
 
    int answer = linearSearch(a,size,4);

    if(answer!=-1){
        cout<<"Key found at index: "<<answer<<endl;
    }else{
        cout<<"Key NOT found!"<<endl;
    }
    return 1;
}

int linearSearch(int array[],int size,int key){
    for(int i =0; i< size; i ++){
        if(array[i]==key){
            return i;
        }
        
    }
    return -1;
}

# HW Assignment 1 Explanation:
- main function:
 - initialize function, takes user keyboard

## Submision:
Either submit CPP file or copy & paste code onto word doc
## Solo Learn Course:
Two weeks to complete, from basic concepts and conditional loops

##C ++ is a hybrid language. can be used for OOP 

# Why use OOP: whats the purpose?

To reuse code, to help use solve some problem.

objects are physical/ non physical entity

To describe what an object is, we have to define a class. It is the template/blueprint used to describe the object

*Attributes*: are variables used to describe the characteristices of an object
*Actions*: Statements, functions,.
- We can put objects together to create a bigger object

*Private class*: Variables are typically declared as private. 
- in order to protect and maintain the attributes, you would make them private
- when a variable is inside a private class, it is protectd and cannot be access outside the class. it is **encapsulated**
*Public*: Functions/**methods** will be stored in public, to access the private variables in class

## Class: Getters & Setter Methods

Setters: A Mutator function, that changes.
Getters: Accessor method, access the variable to display. 

```
class Car {
    private:
        string make;
        int year;
        float mileage;
        bool isElectric;
    public:// getters and setter functions here:
        void displayInfo(){
            cout<<"hello";
        };

};
```

For the example above we will need 4 setters, for each attribute.

***Always restrict access to modifications to functions. Not every function and variable, should be accessible and modified. This could come into conflicts***




### Function VS Method:

**Function:** Block of code will then execute when called.
**Method:** A function that is a member of the class

### Constructors:

A Special method in a class
- Constructor must share the same name as the Class
- The default constructor will be invoked if we do not type an arg
- Parameterize Constructor
- Default Construcotor

```
 Car(){// DEFAULT CONSTRUCTORinitialize the attributes of the object. Initialize the value of variables to default values
            make="";
            year=0;
            mileage=0;
            isElectric=false;
        }
        Car(string m, int y, float mil, bool e){//paramterize constructor
            make=m;
            year=y;
            mileage=mil;
            isElectric=e;
        }
```
## Descrutor:

There is only on Destrucot in C++, the programmer does not invoke the destrucore.

'Object is out of scope'-> Creating an object outside of main. before the object dies, C++ will invoke the destructor as the last action of the object.

The purpose of the Deconstructor is last chance to make changes/display object before the object stops existing.

- Desctructors cant have params
- No Overloadings allowed
- It is invoked by C++, not by the user
- at the end of an objects life

# Separating Code in Files:
`#include Rectangle.h`-> We have a Class called Rectangle, in a separate file. 
- We import the Rectangle like we would a C++ library.
- we can separate a class into 2 files:
    1) One will be the *Header file*: Provides list of all attributes, and methods. But only the function head, no definition
    2) The other will be *Implentation file* Has the implementation of the function definition
***Why do we separate into 2 files***
Everything in C++ must be declared before you use it
This is done purely for organization.

If we are using a Class not created by yourself, what you can do is read the header file. Without having to read the implentation file, we know how to use it. 
This allows for programmers to not needing to know the function statment, instead just use the functiod header.

## Class Practice problem:
10. Develop a class called Car to represent information about a car. The class should have data
members for make (string), year (int), mileage (float), and isElectric (bool). Include the
following components:

• Appropriate access specifiers
• A default constructor that initializes the make and year to empty string and 0 respectively, mileage to 0.0, and isElectric to false.
• A parameterized constructor that allows you to set all the data members with provided
values.
• Separate declaration and implementation sections for organized code.
• Accessor and mutator functions for make, year, mileage, and isElectric.
• A public function displayInfo() that prints the car’s make, year, mileage, and whether it
is an electric car or not, on the screen.
• Include a main() function where you create a Car object using the default constructor,
prompt the user to enter the car details, update the electric status based on isElectric,
and display the car’s information.

# Quiz 1 Review:
```
int sum(int arr[],int size){
    int result =0;
    for(int i=0; i<size;i++ ){
        result+=arr[i];
    }
    return result;
}
main(){
    int a[]={1,2,3,4,5};
    cout<<"Sum is: "<<sum(a,5)<<endl;
    return 0;
}
```
# Separating files into Header and Body files
## Header File

The **Header file** contains te function header, with the list of paramers and types it accepts
at the top of the file we ass the following:
- **ifdef**: define this file if the file is not defined
- **#define**: defining the file


````
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
class Rectangle{
private:
    int width, length;
protected:
public:
    Rectangle();
    Rectangle(int w, int l);
    ~Rectangle();
    void setWidth(int);
    void setLength(int);
    int getWidth();
    int getLength();
    void printArea();
};
#endif /* RECTANGLE_H_ */
````

## SRC File
This is where we store all of the function definitions
for the header files
`rectangle.cpp`

# Constant in Classes:
if you declare an int as a const, it is a read only value. We do this
to protect the value. 

`const Rectangle r1;` -> if we try to declare an object as a constant
and then try to call `r1.printArea();` we will get an error. This is because here we are tryng to imlement an action on a constant. In order to make a method in a class as constant 
we need to add the `const` keyword in the class method 

**Constant Method** Will take action but never change the obejct. Constant object can call a constant method.
- If you have a method that does not change a constant object
- setter methods cannot be constant becasue it changes the object value
- getters are automatically constants
- Make methods constant's if it is not changing the object
- If an object is constant it cannot be change, and can only be used by constant methods
- *Remember that constant methods never change the value of a constant object*
**Syntax for constant method**
```
void printArea() const;
void Rectangle::printArea ()const {cout << "Area = "<< width*length;}
```

# this keyword

**this**-> is a keyword, it is a pointer to the object itself. It will include the address
of the current object.
```
void Rectangle::printArea ()const {cout << "Area of = "<<this<< width*length;}
```
## Alternative Syntax for Assigning values to functions
```
Rectangle::Rectangle(){ width = 1; length = 2;
    //code block
}
```
Both syntax execute the same thing, assign a default value to function parameter
This is called **Initialization section**
```
Rectangle::Rectangle(int width, int length):width(1),length(2){
    //code block
}
```
# String Class:
In C++ there is a string Class in the C++ library, every time
we create a string variable using string we 
are using the **string class**.
we do this by using the `#include <String>` library

# Pointers
A variable that holds the address of another variable.
You can change where the variable is pointing to.
Used typically for dynamic actions in c++.

In other languages pointers are present, but implicity, automatically done. In C++ needs to 
be done manually.

`int a=5;` `int *aP=&a` -> `*aP`, is pointing towards the memory location of value `a`.
**&**-> This ampersand symbol in C++ is a call by reference, here we are referenceing to the variable **a**. 
`*` -> This is called a pointer, combined with the `&`, we are pointing the vairable `aP` to reference (location) of variable a.
- Takes a memory address as a value
- The pointer will have access to that address
`&`-> The ampersand will give us the memory location of a vale.
- In this example it will print the memory address of `a`.
`aP`-> Is pointing to `a`.
```
    int a=5;
    int *aP=&a;
    
    cout<<"a = "<<a<<endl;
    cout<<"*aP = "<< *aP<<endl;
```
`cout<<"*aP = "<< *aP<<endl;`-> This will print the value of **aP**, HOWEVER withouth the `*` symbol, and only printing the variable name(aP), the memory address will be printed instead.
`ap= 0x20161ffda4`-> removing the pointer gives us the address of the variable instead of the value. 
`0x20161ffda4`-> here aP is giving us the location/reference of **a**.

`<<`-> de-reference operator,tells the computer go to address you have in file and do something

A pointer can also point to another pointer, why? because a pointer is also a variable. 
So it also has a memory address that can be referenced.
## Pointers: Example
```
#include <iostream>
using namespace std;

int main(){
   // Declare and initialize pointers
   int x=4;
    int* one = new int;  // Allocate memory for one integer
    int* two = nullptr;  // Initialize another pointer to nullptr

    // Dereference and print the value of 'one' (uninitialized)
    cout << "*one = " << *one << endl;

    // Assign a value to the memory location pointed by 'one'
    *one = 5;
    cout << "*one = " << *one << endl;

    *one = NULL;
    cout << "*one = " << *one << endl;

    (*one) += 1;
    cout << "*one = " << *one << endl;

    // Assign the address pointed by 'one' to 'two'
    two = one;
    cout << "*two = " << *two << endl;

    delete one; // Deallocate memory
    
    return 0;
}
```
`int* one = new int; `-> creates an int, creates space for an integer. and give that address to a pointer. 
- when compiled, this does not get a memory location, only gets allocated memory address when 
it is used/executed.
`int x=4;`
- x is a static variable, it is permenantly given an address and cannot be changed.
- one is dynamic, its memory address can change
`int* two = nullptr;  // Initialize another pointer to nullptr`-> Not given an assignment.
`two` -> is a pointer to an integer like `one` but it is not given 

`new int` -> new keyword allocates memory for the integer, and the address is given to the pointer `one`.
- in this example, int has not been given a value yet. Only allocated memory for on int.

`new`-> operator, allocate the memory that represents the object, and gives us back the memory address.

`*one=5` -> assign the value 5 to the memory location.

`*one = NULL` -> if we print this out C++ will print 0. 
- Null is a consntant element, its value is zero, that never changes
**Pointer Arithmetic**
`*one += 1;`-> add 1 to the memory address.

` delete one; // Deallocate memory`

## Pointers & Arrays:

arrays in C++ must be assigned a size, for the number of element. The Size of the array cannot be changed.

Static Array -> allocate memory at compile time

Dynamic Array -> Will only allocate memory when the program is running. 
- if not used then it can also be de allocated

Address of the first element gets printed from an array. All elements in the array are 
always together, that's why all we need it the location
of the first item of the array.
`int* arrayTwo = new int[sizeTwo];` vs `int arrayOne[sizeOne];`

`int arrayOne[sizeOne];`-> 
- identifier, arrayone, cannot be changed, it is permanantley assigned to an array of 5 elements

`int* arrayTwo = new int[sizeTwo];` -> This is dynamic, you can point to a different array of a different size.
- more flexible and better management of memory.

#### Dellocation of memory:delete keyword

In *Java* and some other programming languages, in the ackground, after a program is done running, Java will deallocate the memory address to free up space. 

In C++, once you assign a value, its is allocated memory space, and MUST be deleted manually, to de-allocate memory space.

using the `delete` keyword followed by the name of the identifier, for free up space.

## CHAT GPT Definition:
```
*one = NULL;: Here, a pointer variable named one is being assigned the value of NULL. In C++, NULL represents a special value indicating that the pointer doesn’t point to any valid memory location. So, one now points to nothing.
cout << "*one = " << *one << endl;: This line prints the value pointed to by one. Since one is currently pointing to NULL, dereferencing it (using *one) results in undefined behavior. In practice, it might print garbage data or crash the program.
one += 1;: This increments the memory address stored in one by one. Since one is currently NULL, adding 1 to it doesn’t make sense. It’s an invalid operation.
cout << "*one = " << *one << endl;: Again, this line attempts to print the value pointed to by one. However, since one is still NULL, dereferencing it remains undefined behavior.
In summary, this code snippet involves pointer manipulation, but it contains errors related to dereferencing a NULL pointer and invalid pointer arithmetic. It’s essential to ensure that pointers point to valid memory locations before using them to avoid unexpected behavior in C++ programs.
```

# Recursion:
A function is defined in terms of itseld. 
Function or method that calls itself.


broken down into two parts:
**Base Case:** Most simple(instance) of that problem from which we know the answer.
- Where the repiition of the recursion stops calling itself.
- Without this the resirion will continue forever.
- The recursion keeps running until it meets the base case.

**Recursive Case:** The part of the function that calls itself. with a modified version of problem moving closer to the base case.

## Facotrial:
Factorial-> Product f the first n positive intergers
example -> 5!= 5*4*3*2*1 -> 120


## Factorial Function:

```
#include <iostream>
using namespace std;
int factorial(int);
int factorial(int x){
    if (x==0|| x==1)// BASE Case -> mechanism that controls when the function will stop running
        return 1;// BASE CASE 
    else 
        return x* factorial(x-1);
    
}   

int main(){
   int number =5;
   cout<<  number<<" != "<<factorial(number) <<endl;

    return 0;
}
```
`return 5* factorial(5-1);`
`f(5)` -> `5*f(4)` the factorial func will take the number 5 and keep 

## Loop & Recursion Comparison:
```
  int number=10000;
    int result=0;
   cout<<"Sum="<<sum(number)<<endl;
   while(number>=1){
    result+=number;
    number--;
   }
   cout<<"Result="<<result<<endl;
```
   In the example above the while loop can run larger int data types, because it doesn't require alot of memory to work
   - Recusion on the other hand, requires more memory and processing, which slows down the computer and requires more work
   - Most of the time recursion is easier to write, but more work for the computer
   - The loop, depending on the situation, can be harder to read and write, but is more optimal and efficient for the computer. It is best to use LOOPs for this case.
   - 

## Fibinacci Example:
**Fibinacci Number**:
**Fibinacci Sequence**:
# This Keyword
`this`-> Works within a class, to allow an object within a class to refer to itself
- Way for object to refer to itself
- This explicity picks the class variable, even if there is another member variable locally scoped to a method with the same name
  ```
      cout<<"this ->myInt"<<this->myInt<<endl; 
        cout<<"(*this).myInt"<<(*this).myInt<<endl; 
  ``` 
  The example about,both are the same
  * `* `-> Dereference-go to the object
  * `.`-> Dot operator, go to the member of that object
  * `()` -> Need to inlclude parethesis becuase C++ will pick the dot operator to execute first
  ## Operator Overloading
  **Overloading** take an operator and tell it to do something else
  
  `+` Plus Operator: Adds the values of the two operands. 
  - When using them to add two objects we have to telly the computer what the `+` operator does
  `r3 = r1+r2;`-> When were adding to objects together, we are **overloading** the operator

  ```
  lass Rectangle {
private:
    int width, length;
public:
    Rectangle();
    Rectangle(int w, int l);
    void printArea();
    void displayInfo();
    Rectangle operator+(Rectangle& r);
    Rectangle operator+(int value); // Operator overload declaration
};
  ```
```
### This keyword Practice Problems (Generate from CHAT GPT)
  Certainly! Understanding the usage of the this keyword in C++ is essential. Let’s start with some simple practice problems to reinforce your understanding:

Print “Hello World”: Write a program that prints the words “Hello World” on the console. Here’s an example of the expected output:
Hello World
1
Read and Print a Number: Create a program that reads a number entered by the user and prints it on the console. For instance:
Enter any Number: 25
Entered Number: 25
1
Print ASCII Value of a Character: Each character in C++ has an associated ASCII value. Write a program that prints the ASCII value of a character. For example:
Character = 'A'
ASCII Value of 'A' = 65
1
Swap Two Numbers: Develop a program that swaps the values of two number variables. After execution, the first variable should hold the value of the second variable, and vice versa. For instance:
Initially: a = 10, b = 250
After Swap: a = 250, b = 10
1
Find the Size of Data Types: Print the memory size (in bytes) for int, float, double, and char data types. For example:
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte
1
Calculate Compound Interest: Write a program that calculates and prints the compound interest given the principal amount, rate of interest, and time. For example:
Principle = 25000
Rate = 12%
Time = 5 Years
Compound Interest = 19058.54
1
Check Even or Odd Integers: Determine whether a given integer is even or odd and display the result. For example:
Number = 28
Output: 28 is Even Number.
1
Find the Largest Among 3 Numbers: Given three numbers, identify the largest one. For instance:
Numbers: 10, 25, 15
Largest Number: 25
