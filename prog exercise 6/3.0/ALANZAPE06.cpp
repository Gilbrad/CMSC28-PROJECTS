#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

int main(){
    string title, synopsis, genres, fname, lname, mpaa_rating;
    int gcount, count;

    Movie movie;

    cout << "Welcome to the Movie Database!" << endl;
    cout << "Please enter the following information to add a movie to the database." << endl;
    cout << "The following must be collected: " << endl << endl;

    cout << "Title: ";
    getline(cin, title);
    movie.setTitle(title);

    cout << "Synopsis: ";
    getline(cin, synopsis);
    movie.setSynopsis(synopsis);

    cout << "MPAA Rating: ";
    cin >> mpaa_rating;
    movie.setMpaa_rating(mpaa_rating);

    cout << "How many genres: ";
    cin >> gcount;
    cin.ignore();
    for(int i = 0; i < gcount; i++){
        cout << "Genre " << i + 1 << ": ";
        getline(cin, genres);
        movie.setGenres(genres, i);
    }

    cout << "Director's First Name: ";
    getline(cin, fname);
    movie.setFname(fname, 0);

    cout << "Director's Last Name: ";
    getline(cin, lname);
    movie.setLname(lname, 0);

    cout << "Enter the amount of actors in the movie (main actors only): ";
    cin >> count;
    cin.ignore();
    for(int i = 1; i <= count; i++){
        cout << "Actor " << i << "'s First Name: ";
        getline(cin, fname);
        movie.setFname(fname, i);

        cout << "Actor " << i << "'s Last Name: ";
        getline(cin, lname);
        movie.setLname(lname, i);
    }

    cout << "\nThe movie " << movie.getTitle() << " has been added to the database." << endl;
    cout << "The move details provided are as follows: " << endl;
    cout << "\tTitle: " << movie.getTitle() << endl;
    cout << "\tSynopsis: " << movie.getSynopsis() << endl;
    cout << "\tMPAA Rating: " << movie.getMpaa_rating() << endl;
    cout << "\tGenres: ";
    for(int i = 0; i < gcount - 1; i++){
        cout << movie.getGenres(i) << ", ";
    }
    cout << movie.getGenres(gcount - 1) << endl;
    cout << "\tDirector: " << movie.getFname(0) << " " << movie.getLname(0) << endl;
    cout << "\tActors: ";
    for(int i = 1; i < count; i++){
        cout << movie.getFname(i) << " " << movie.getLname(i) << ", ";
    }
    cout << movie.getFname(count) << " " << movie.getLname(count) << endl;
}