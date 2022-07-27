#include <iostream>
using namespace std;

int main() {
    int yearsPerGen;
    int userYear;
    int curYear;
    int numAncestors;

    curYear = 2020;

    numAncestors = 2;
    cin>> userYear;

    while (curYear >= userYear) {
        cout<< curYear;
        cout<< ": ";
        cout<< numAncestors;
        cout<< " ancestors\n";
   
        //each ancestor had two parents
        numAncestors =  numAncestors * 2;
   
        //Go back one gen
        curYear = curYear - 20;
    }
   

}

