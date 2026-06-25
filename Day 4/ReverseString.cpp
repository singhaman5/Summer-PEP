// Using two pointers
#include<iostream>
using namespace std;
int main(){
    string str = "college";
    int left = 0;
    int right = str.length() - 1;
    while(left < right){
        swap(str[left], str[right]);
        left++;
        right--;
    }
    cout << str;
}

// Using inbuilt STL

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "college";
    reverse(str.begin(), str.end());
    cout << str;
}