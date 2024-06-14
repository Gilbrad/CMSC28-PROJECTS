#include <iostream>
#include "VisaApplication.h"
using namespace std;

int main(){
    VisaApplication visaApplication("Gilean Cyrus C. Alanza", 20, "p4ssp0rt");

    cout << "\nVisa Application Information:" << endl;
    visaApplication.display();
}