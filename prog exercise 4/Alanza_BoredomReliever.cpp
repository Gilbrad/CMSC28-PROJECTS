#include <iostream>
#include <vector>
#include <string>

using namespace std;

int get_value();
void convert_to_binary(int base_ten, string& final_result);
void display_result(int x, string y);

int main(){
    int base_ten_integer;
    string final_result;

    base_ten_integer = get_value();
    convert_to_binary(base_ten_integer, final_result);
    display_result(base_ten_integer, final_result);
}

int get_value(){
    int x;
    cout << "Enter an integer to convert to binary: ";
    cin >> x;
    
    return x;
}

void convert_to_binary(int base_ten, string& final_result){
    vector<int> temp_vector;
    string binary_result = "";
    int x = base_ten;

    do{
        temp_vector.push_back(x % 2);
        x = x / 2;
    } while (x != 0);

    for(auto y = temp_vector.rbegin(); y != temp_vector.rend(); ++y){
        binary_result = binary_result + to_string(*y); 
    }
    
    final_result = binary_result;
}

void display_result(int x, string y){
    cout << "\nThe Base 10 integer input was: " << x << endl;
    cout << "The Binary result is: " << y << endl;
}