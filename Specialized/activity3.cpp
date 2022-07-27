#include <iostream>
using namespace std;

int main() {
    int userNum;
    int curPower;

    cin>> userNum;

    while (userNum == 1) {
        cout<< curPower;
        cout<< "\n";
   
        curPower = curPower * 2;
        cin>> userNum;
    }

    cout<< "Done.";
}