/*                              OOPS
Object oriented programming is a type of programming which uses objects and classes for its functioning.
based on real world entities like inheritance, polymorphism(same function but wth different definition), 
data hiding, etc.
Basic concepts of oops:
1. CLASS-> data type that has its own members i.e. data members and member function 
2. OBJECTS-> instance of a class. A class when defined does not have memoery chunk itself which 
will be allocated as soon as objects are created
3. ENCAPSULATION-> in oops, it is concept of wrapping together of data and info in single unit.(data hiding)
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
//example: 
#include <iostream>
using namespace std;
ABC abc; //object made
class ABC{  //class
int fun(int a, int b);
int fun(int a,int b){
    return 0;
}
};

int main(){
abc.a; //accesing the members of class
abc.b;}


