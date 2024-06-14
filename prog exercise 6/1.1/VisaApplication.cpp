#include <iostream>
using namespace std;

class VisaApplication{
    private:
        string name;
        int age;
        string passportNumber;
    
    public:
        VisaApplication(){}

        VisaApplication(string n, int a, string p){
            this->name = n;
            this->age = a;
            this->passportNumber = p;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Passport Number: " << passportNumber << endl;
        }
};

int main(){
    VisaApplication visaApplication("Gilean Cyrus C. Alanza", 20, "p4ssp0rt");

    cout << "\nVisa Application Information:" << endl;
    visaApplication.display();
}