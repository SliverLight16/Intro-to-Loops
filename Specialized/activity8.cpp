#include <iostream>
using namespace std;

int main () {
    int numA;
    int numB;

    cin>> numA;
    cin>> numB;

//Euclid's Expression
    while (numA != numB) {
        
        if (numB > numA) {
            numB = numB - numA;
        }
      
        else {
            numA = numA - numB;
        }
    }
      
    cout<< "GCD is ";
 
    cout<< numA;
}