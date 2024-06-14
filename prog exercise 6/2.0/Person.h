#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        char gender;

    public:
        Person(){}

        Person(int newage){
            age = newage;
            gender = 'M';
        }

        Person(int newage, char c){
            age = newage;
            gender = c;
        }

        void setage(int newage){
            if( newage >= 0){
                age = newage;
            } else{
                cout << "invalid age!!!" << endl;
            }
        }

        int getage(){
            return age;
        }

        void setgender(char c){
            if( (c == 'M') || (c == 'F') ){
            gender = c;
            } else{
                cout << "invalid gender!!!" << endl;
            }
        }

        char getgender(){
            return gender;
        }

        string getGeneration(){
            int year = 2024 - age;
            if(year >= 1901 && year <= 1927){
                return "The Greatest Generation";
            }
            else if(year > 1927 && year <= 1945){
                return "The Silent Generation";
            }
            else if(year > 1945 && year <= 1964){
                return "Baby Boomer";
            }
            else if(year > 1964 && year <= 1980){
                return "Generation X";
            }
            else if(year > 1980 && year <= 1996){
                return "Millenial";
            }
            else if(year > 1996 && year <= 2010){
                return "Generation Z";
            }
            else if(year > 2010){
                return "Generation Alpha";
            }
            else{
                return "You belong in the Jurrasic Period!";

            }
        }
};