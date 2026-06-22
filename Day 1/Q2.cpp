// Find sum of array elements

#include <iostream>
using namespace std;

int main() {

    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};

    int sum = 0;

    for(int i = 0; i <= 10; i++) {
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}