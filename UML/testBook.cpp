#include <iostream>
#include "Book.h"
using namespace std;

int main(){
    string title, author, isbn, publisher;

    cout << "Initializing Book object.." << endl;
    Book book;
    cout << "Book object initialized.\n" << endl;

    cout << "Enter the title of the book: ";
    getline(cin, title);
    book.setTitle(title);

    cout << "Enter the author of the book: ";
    getline(cin, author);
    book.setAuthor(author);

    cout << "Enter the ISBN of the book: ";
    getline(cin, isbn);
    book.setISBN(isbn);

    cout << "Enter the publisher of the book: ";
    getline(cin, publisher);
    book.setPublisher(publisher);

    cout << "\nBook Information:" << endl;
    cout << "\tTitle: " << book.getTitle() << endl;
    cout << "\tAuthor: " << book.getAuthor() << endl;
    cout << "\tISBN: " << book.getISBN() << endl;
    cout << "\tPublisher: " << book.getPublisher() << endl;
}