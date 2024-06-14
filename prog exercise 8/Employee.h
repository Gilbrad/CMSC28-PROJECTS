#include <iostream>
#include "Person.h"

using namespace std;

class Employee : public Person{
    private:
        string employeeNum;
    
    public:
        string position;
        string office;
        float salary;

        Employee(){}

        void setEmployeeNum(string employeeNum){
            this->employeeNum = employeeNum;
        }

        void setPosition(string position){
            this->position = position;
        }

        void setOffice(string office){
            this->office = office;
        }

        void setSalary(float salary){
            this->salary = salary;
        }

        string getEmployeeNum(){
            return employeeNum;
        }

        string getPosition(){
            return position;
        }

        string getOffice(){
            return office;
        }

        float getSalary(){
            return salary;
        }
};