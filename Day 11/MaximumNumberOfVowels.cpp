// LEETCODE - 1456

#include<iostream>
#include<string>
using namespace std;
bool vowels(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
int main(){
    string s = "abciiidef";
    int k = 3;
    int cnt = 0, ans = 0;
    for(int i = 0; i < k; i++){
        if(vowels(s[i]))
            cnt++;
    }
    ans = cnt;
    // Sliding window
    for(int i = k; i < s.size(); i++){
        if(vowels(s[i]))
            cnt++;
        if(vowels(s[i-k]))
            cnt--;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}