#include <iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        string isbn;
        string publisher;

    public:
        Book(string t = "", string a = "", string i= "", string p = ""){
            this->title = t;
            this->author = a;
            this->isbn = i;
            this->publisher = p;
        }

        string getTitle(){
            return title;
        }

        string getAuthor(){
            return author;
        }

        string getISBN(){
            return isbn;
        }

        string getPublisher(){
            return publisher;
        }

        void setTitle(string t){
            this->title = t;
        }

        void setAuthor(string a){
            this->author = a;
        }

        void setISBN(string i){
            this->isbn = i;
        }

        void setPublisher(string p){
            this->publisher = p;
        }
};