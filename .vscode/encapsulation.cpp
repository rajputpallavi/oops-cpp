#include <iostream>
#include <string>
using namespace std;
//Encapsulation is wrapping up of data and members function in a single unit called class.
// it helps in data hiding i.e. to secure the sensitive data.

class Account{
    private :
    double balance;
    string password; //data hiding
    public:
    string accountid;
    string usernname;

};
int main(){
    return 0;}