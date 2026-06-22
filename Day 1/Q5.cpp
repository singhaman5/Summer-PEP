// Reverse a string

#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {

    string str = "college";

    reverse(str.begin(), str.end());

    cout << str;

    return 0;
}