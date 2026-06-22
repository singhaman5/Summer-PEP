// Print even and odd numbers

#include <iostream>
using namespace std;

int main() {

    int n = 2;

    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {
            cout << i << " Even Number" << endl;
        }
        else {
            cout << i << " Odd Number" << endl;
        }
    }

    return 0;
}