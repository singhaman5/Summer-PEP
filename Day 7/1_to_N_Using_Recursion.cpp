#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n>100){
        return;
    }
    //cout<<n<<" ";
    printNumbers(n+1);
    cout<<n<<" ";
}

int main() {
    printNumbers(1);
}