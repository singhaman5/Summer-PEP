// Palindrome using two pointers

#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s = "Madam, I'm Adam";
    int left = 0;
    int right = s.length() - 1;
    bool flag = true;
    while(left < right){
        while(left < right && !isalnum(s[left])){
            left++;
        }
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
}

