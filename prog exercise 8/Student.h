#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person{
    private:
        string studentNum;
    
    public:
        string course;
        string department;
        string college;

        Student(){}

        void setStudentNum(string studentNum){
            this->studentNum = studentNum;
        }

        void setCourse(string course){
            this->course = course;
        }

        void setDepartment(string department){
            this->department = department;
        }

        void setCollege(string college){
            this->college = college;
        }

        string getStudentNum(){
            return studentNum;
        }

        string getCourse(){
            return course;
        }

        string getDepartment(){
            return department;
        }

        string getCollege(){
            return college;
        }
};