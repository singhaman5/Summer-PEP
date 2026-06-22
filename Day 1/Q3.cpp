// Find largest among three numbers

#include <iostream>
using namespace std;

int main() {

    int a = 2, b = 3, c = 4;

    if(a > b && a > c) {
        cout << a << " is the largest";
    }
    else if(b > a && b > c) {
        cout << b << " is the largest";
    }
    else {
        cout << c << " is the largest";
    }

    return 0;
}