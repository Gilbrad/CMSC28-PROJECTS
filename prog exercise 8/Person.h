#include <iostream>

using namespace std;

class Person{

    public:
        string fname[10];
        string lname[10];
        string gender;
        string emailAdd;
        string cpNum;

        void setFname(string fname){
            this->fname[10] = fname;
        }

        void setLname(string lname){
            this->lname[10] = lname;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        void setEmailAdd(string emailAdd){
            this->emailAdd = emailAdd;
        }

        void setCpNum(string cpNum){
            this->cpNum = cpNum;
        }

        string getFname(){
            return fname[10];
        }

        string getLname(){
            return lname[10];
        }

        string getGender(){
            return gender;
        }

        string getEmailAdd(){
            return emailAdd;
        }

        string getCpNum(){
            return cpNum;
        }
};