#include <iostream>
using namespace std;

int main() {
    int val;
    float sum;
    int num;
    float avg;

    cin>> sum;
    num = 0;
    val = 0;

    while (val > -1) {
        sum = sum + val;
        num = num + 1;
        cin>> val;
    }
   
    avg = sum / num;
    cout<< avg;
}