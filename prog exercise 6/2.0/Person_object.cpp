#include <iostream>
#include "Person.h"
#include "Name.h"

using namespace std;
int main(){
    int a;
    char g;
    string f, l;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;
    Name n;

    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);

    cout << "Input firstname: ";
    cin >> f;
    n.setfirstname(f);

    cout << "Input lastname: ";
    cin >> l;
    n.setlastname(l);

    cout << "\nAge = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;
    cout << "Firstname = " << n.getfirstname() << endl;
    cout << "Lastname = " << n.getlastname() << endl;\
    cout << "Generation = " << p.getGeneration() << endl;

    return 0;
}