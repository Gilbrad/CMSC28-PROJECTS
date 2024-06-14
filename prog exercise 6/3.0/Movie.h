#include <iostream>
#include "Person.h"
using namespace std;

class Movie : public Person{
    private:
        string title;
        string synopsis;
        string mpaa_rating;
        string genres[10];

    public:
        Movie(){}

        void setTitle(string t){
            title = t;
        }

        string getTitle(){
            return title;
        }

        void setSynopsis(string syn){
            synopsis = syn;
        }

        string getSynopsis(){
            return synopsis;
        }

        void setMpaa_rating(string mpaa){
            mpaa_rating = mpaa;
        }

        string getMpaa_rating(){
            return mpaa_rating;
        }

        void setGenres(string g, int count){
            genres[count] = g;
        }

        string getGenres(int count){
            return genres[count];
        }
};