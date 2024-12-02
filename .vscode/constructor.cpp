#include <iostream>
using namespace std;
/*
constructor is a special method invoked automatically at time of object creation. Used for intialisation.
-same name as class
-doesn't have return type
-only called once (automatically);
-memory allocation happens when constructor is called
we can make our own constructor ..but remember to always make it public
*/
class teacher{
    private:
    double salary;
    public:

    //constructor
    //non-parameterized
    teacher(){    //there is no return type of constructor
    cout<<"Hi i am consructor\n";  //so now whenever you make an object .. this contructor will be called first
        semester=3; //if we want the value be by default for all the objects, we put the value of semester in constructor.
    }
    //parameterized
    teacher(string n,string d, string s,double sal){  
        name=n;
        dept=d;
        subject=s;
        salary=sal;
       }

    //properties or attributes
    string name;
    string dept;
    int semester;
    string subject;
   
    //methods or member functions(functions in class)
    void changedept(string newdept){
        dept=newdept;}
        //setter
        void setsalary(double s){
            salary=s;
        }
        //getter
        double getsalary(){
            return salary;
        }
};


int main(){
    teacher t1; // when object is made,constructor call happens here
    teacher t2;
    teacher t3("Pallavi Thakur","Computer","C++",5000000); //parametrized constructor
    cout<<t3.subject<<endl;
    t1.name="Pallavi";
    t1.dept="Computer science";
    t1.semester;
    t2.semester;
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.semester<<endl;
    cout<<t2.semester<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
 }