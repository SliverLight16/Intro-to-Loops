#include <iostream>
using namespace std;

int main() {
    
    int val;
    int sum;

    cin>> sum;
    val = 0;

    while (val > -1) {
        sum = sum + val; 
        cin>> val;
    }
   
    cout<< sum;
}