#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Student student;

    cout << "This program will ask for the student's information.\nProgrammed by Gilean Cyrus C. Alanza.\nPlease Enter the Following:" << endl;

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

    cout << "Student Number: ";
    string studentNum;
    getline(cin, studentNum);

    cout << "Course: ";
    string course;
    getline(cin, course);

    cout << "Department: ";
    string department;
    getline(cin, department);

    cout << "College: ";
    string college;
    getline(cin, college);

    student.setFname(fname);
    student.setLname(lname);
    student.setEmailAdd(emailAdd);
    student.setCpNum(cpNum);
    student.setStudentNum(studentNum);
    student.setCourse(course);
    student.setDepartment(department);
    student.setCollege(college);

    cout << endl << "Hi " << student.getFname();
    cout << " " << student.getLname() << "!" << endl;
    cout << "Thank you for registering for our collefe. Here is your information:" << endl;
    cout << "Student Number: " << student.getStudentNum() << endl;
    cout << "Course: " << student.getCourse() << endl;
    cout << "Department: " << student.getDepartment() << endl;
    cout << "College: " << student.getCollege() << endl;
    cout << "Thank you for Registering! Here is your student number: \n" << endl;
    cout << "Student Number: " << student.getStudentNum() << endl;
}