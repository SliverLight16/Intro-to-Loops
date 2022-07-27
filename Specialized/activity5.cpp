#include <iostream>
using namespace std;

int main() {
    int userNum;

    cin>> userNum;

    while (userNum > 0) {
        cout<< "-";
   
        userNum = userNum - 10;
    }
   
    cout<< "\n";
}