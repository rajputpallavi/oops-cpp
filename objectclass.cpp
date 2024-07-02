#include <iostream>
#include <string>
using namespace std;
 class teacher{
    private:
    double salary;
    public:
    //properties or attributes
    string name;
    string dept;
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
    teacher t1; //object made
    t1.name="Pallavi";
    t1.dept="Computer science";
    cout<<t1.name;
    return 0;
 }