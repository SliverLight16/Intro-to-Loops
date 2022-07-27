#include <iostream>
using namespace std;

int main() {
    int numKids;
    int userNum;

    numKids = 2;
    cin>> userNum;

    while (userNum == 1) {
        cout<< numKids;
        numKids = numKids * 2;
    }

//Oops an infinite loop
}