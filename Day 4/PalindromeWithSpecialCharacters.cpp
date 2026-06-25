#include<iostream>
using namespace std;

int main(){
    string s = "a#?:b#?$a";
    int left = 0;
    int right = s.length() - 1;
    bool flag = true;
    while(left < right){
        if(s[left] != s[right]){
            flag = false;
            break;
        }
        left++;
        right--;
    }
    if(flag)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}