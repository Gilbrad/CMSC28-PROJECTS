#include <iostream>

using namespace std;

void program_definition();
void read_data(int& x, int& y, int& z);
int smallest_value(int x, int y, int z);
int largest_value(int x, int y, int z);
void display_data(int x, int y, int z, int smallest_value, int largest_value, int difference_of_value);

int main(){
    int x, y, z;

    program_definition();
    read_data(x, y, z);
    int small_value = smallest_value(x, y, z);
    int large_value = largest_value(x, y, z);

    int difference_of_value = large_value - small_value;
    display_data(x, y, z, small_value, large_value, difference_of_value);

    return 0;
}

void program_definition(){
    cout << "Hello, this is my submission on the teaser problem set for Programming Exercise 4." << endl;
    cout << "I am Gilean Cyrus C. Alanza and this was done at April 27th of 2024." << endl;
    cout << "This is for my CMSC 28 subject during my 2nd Semester of AY 2023-2024." << endl;
}

void read_data(int& x, int& y, int& z){
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;
}

int smallest_value(int x, int y, int z){
    if(x < y && x < z){
        return x;
    } else if (y < x && y < z){
        return y;
    } else {
        return z;
    }
}

int largest_value(int x, int y, int z){
    if(x > y && x > z){
        return x;
    } else if (y > x && y > z){
        return y;
    } else {
        return z;
    }
}

void display_data(int x, int y, int z, int smallest_value, int largest_value, int difference_of_value){
    cout << "\nThe values of x, y, and z are: " << x << ", " << y << ", " << z << endl;
    cout << "The smallest value is: " << smallest_value << endl;
    cout << "The largest value is: " << largest_value << endl;
    cout << "The difference of the largest and smallest value is: " << difference_of_value << endl;
}
