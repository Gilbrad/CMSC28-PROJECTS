#include <iostream>
using namespace std;

class Name{
    private:
        string firstname;
        string lastname;

    public:
        Name(){}

        Name(string first, string last){
            firstname = first;
            lastname = last;
        }

        void setfirstname(string first){
            firstname = first;
        }

        string getfirstname(){
            return firstname;
        }

        void setlastname(string last){
            lastname = last;
        }

        string getlastname(){
            return lastname;
        }
};