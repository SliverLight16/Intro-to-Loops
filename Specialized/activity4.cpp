#include <iostream>
using namespace std;

int main() {
    float celsius;
    float farenVal;
    int userChoice;

    userChoice = 1;

    celsius = 0.0;

    while (userChoice == 1) {
        farenVal = (celsius * 9.0 / 5.0) + 32.0;
        cout<< celsius;
        cout<< "C is ";
   
        cout<< farenVal;
        cout<< "F\n";
   
        celsius = celsius + 5;
   
        cin>> userChoice;
    }

    cout<< "Goodbye.";
}