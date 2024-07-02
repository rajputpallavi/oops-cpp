/*                              OOPS
Object oriented programming is a type of programming which uses objects and classes for its functioning.
based on real world entities like inheritance, polymorphism(same function but wth different definition), 
data hiding, etc.
Basic concepts of oops:
1. CLASS-> data type that has its own members i.e. data members and member function 
2. OBJECTS-> instance of a class. A class when defined does not have memoery chunk itself which 
will be allocated as soon as objects are created
3. ENCAPSULATION-> in oops, it is concept of wrapping together of data and info in single unit.(data hiding).example-"404 page not found"
4. POLYMORPHISM-> means multiple forms. ability of oops to do some work using multiple forms. 
Polymorphism is achieved in two ways:
i) Operator overloading
ii) Function overloading
5. INHERITANCE-> capability of a class to inherit or derive properties or characteristics other class.
It follows "reusability"
6. ABSTRACTION


Difference b/w oops and procedural programming


Dynamic Programming(types of approaches):
1. Top-Down (memoization)-->Recursive
2. Bottom-Up (Tabulation)-->Iterative
*/

//sytanx
// class class_name{
//     data_type data_member;
//         return_type method_name(parameters);
//         };


/*
n-->next line
\t-->tab
\r
\b
'
''*/

#include <iostream>

class Demo{
    public:
   static void main(){  //we use static to define the scope so that u can use scope resolution
        std::cout<<"1.welcome\n";
        std::cout<<"2.\twelcome\n";
        std::cout<<"3.\rwelcome\n";
        std::cout<<"4.\bwelcome\n";
        std::cout<<"1.\'welcome\'\n";
        std::cout<<"1.\"welcome\"\n";
    }
};
int main(){
    Demo::main(); //scope resolution
    return 0;
}


