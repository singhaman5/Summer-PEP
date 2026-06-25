#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s = "a#?:b#?$a";
    // string s = "a1b1a";
    int left = 0;
    int right = s.length() - 1;
    bool flag = true;
    while(left < right){
        // skip special characters from left
        while(left < right && !isalnum(s[left])){
            left++;
        }
        // skip special characters from right
        while(left < right && !isalnum(s[right])){
            right--;
        }
        if(tolower(s[left]) != tolower(s[right])){
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