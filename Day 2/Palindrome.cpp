// Best way -> T.C = O(log n),  S.C = O(1)

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 111;
//     int original = n;
//     int reverse = 0;

//     while(n>0){
//         int digit = n%10;
//         reverse = reverse * 10 + digit;
//         n = n/10;
//     }
//     if(original == reverse){
//         cout<<"It is a Palindrome number";
//     }
//     else{
//         cout<<"It is not a Palindrome number";
//     }
// }


// Converting the number to String -> T.C = O(n), S.C = O(n)

#include <iostream>
#include <string>
using namespace std;
int main(){
    int n = 121;
    string str = to_string(n);
    int left = 0;
    int right = str.length()-1;
    bool flag = true;

    while(left < right){
        if(str[left] != str[right]){
            flag = false;
            break;
        }
        left++;
        right--;
    }
    if(flag)
        cout<<"It is a Palindrome";
    else
        cout<<"It is Not a Palindrome";
    return 0;
}