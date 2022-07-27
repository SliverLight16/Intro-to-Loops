#include <iostream>
using namespace std;

int main () {
    int valueSum;
    int curValue;
    int numValues;
    float avgVal;

    valueSum = 0;
    numValues = 0;
    cin>> curValue;

    while (curValue > 0) {
        valueSum = valueSum + curValue;
        numValues = numValues + 1;
        cin>> curValue;
    }
   
    avgVal = (1.0*valueSum)/numValues;

    cout<< "Average: ";
    cout<< avgVal;
}