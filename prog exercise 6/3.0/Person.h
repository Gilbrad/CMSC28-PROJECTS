#include <iostream>

using namespace std;

class Person{
    private:
        string fname[20];
        string lname[20];

    public:
        Person(){}

        void setFname(string fn, int count){
            fname[count] = fn;
        }

        string getFname(int count){
            return fname[count];
        }

        void setLname(string ln, int count){
            lname[count] = ln;
        }

        string getLname(int count){
            return lname[count];
        }
};