#include <iostream>
#include "Employee.h"

using namespace std;

int main(){
    Employee employee;

    cout << "This program will ask for the employee's information to conduct a survey.\nProgrammed by Gilean Cyrus C. Alanza.\nPlease Enter the Following:" << endl;

    cout << "First Name: ";
    string fname;
    getline(cin, fname);

    cout << "Last Name: ";
    string lname;
    getline(cin, lname);

    cout << "Gender: ";
    string gender;
    getline(cin, gender);

    cout << "Email Address: ";
    string emailAdd;
    getline(cin, emailAdd);

    cout << "Contact Number: ";
    string cpNum;
    getline(cin, cpNum);

    cout << "Employee Number: ";
    string employeeNum;
    getline(cin, employeeNum);

    cout << "Position: ";
    string position;
    getline(cin, position);

    cout << "Office: ";
    string office;
    getline(cin, office);

    cout << "Salary: ";
    float salary;
    cin >> salary;

    employee.setFname(fname);
    employee.setLname(lname);
    employee.setGender(gender);
    employee.setEmailAdd(emailAdd);
    employee.setCpNum(cpNum);
    employee.setEmployeeNum(employeeNum);
    employee.setPosition(position);
    employee.setOffice(office);
    employee.setSalary(salary);

    cout << endl << "Hi " << employee.getFname();
    cout << " " << employee.getLname() << "!" << endl;
    cout << "Thank you for participating in our survey. Here is your information:" << endl;
    cout << "Employee Number: " << employee.getEmployeeNum() << endl;
    cout << "Position: " << employee.getPosition() << endl;
    cout << "Office: " << employee.getOffice() << endl;
    cout << "Salary: " << employee.getSalary() << endl;
    cout << "Thanks for participating!";
}