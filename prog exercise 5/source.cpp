#include <iostream>
#include <cmath>

using namespace std;

void input_array(int* array);
int largest(int* array);
int smallest(int* array);
float average(int* array);
float standard_deviation(int* array);
float variance(int* array);
void display_results(int* array);

int main(){
    int integer_array[10];
    for(int i = 0; i < 10; i++){
        integer_array[i] = 0;
    }
    cout << "Programming Exercise 05" << endl;
    cout << "Submitted by: Gilean Cyrus C. Alanza" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Enter up to 10 non-zero integers only (positive/negative).\nThis program will perform basic statistic tasks." << endl;
    int* integer_pointer = integer_array;
    input_array(integer_pointer);
    display_results(integer_pointer);
}

void input_array(int* array){
    for(int i = 0; i < 10; i++){
        cout << "Enter an integer: ";
        cin >> *(array + i);
        if (*(array + i) == 0){
            break;
        }
    }
}

int largest(int* array){
    int largest = *array;
    int i = 0;
    while(i < 10){
        if(*(array + i) > largest){
            largest = *(array + i);
        } 
        i++;
    }
    return largest;
}

int smallest(int* array){
    int smallest = *array;
    int i = 0;
    while(i < 10){
        if(*(array + i) == 0){
            break;
        }
        if(*(array + i) < smallest){
            smallest = *(array + i);
        }
        i++;
    }
    return smallest;
}

float average(int* array){
    int sum = 0;
    int i = 0;
    while(i < 10){
        if(*(array + i) == 0){
            break;
        }
        sum += *(array + i);
        i++;
    }
    return float(sum) / i;
}

float standard_deviation(int* array){
    double sum = 0;
    float mean = average(array);
    int i = 0;
    while(i < 10){
        if(*(array + i) == 0){
            break;
        }
        sum += pow((*(array + i) - mean), 2);
        i++;
    }
    return sqrt(float(sum) / i);
}

float variance(int* array){
    return pow(standard_deviation(array), 2);
}

void display_results(int* array){
    cout << "\nResults:" << endl;
    cout << "\tLargest: " << largest(array) << endl;
    cout << "\tSmallest: " << smallest(array) << endl;
    cout << "\tAverage: " << average(array) << endl;
    cout << "\tStandard Deviation: " << standard_deviation(array) << endl;
    cout << "\tVariance: " << variance(array) << endl;
}