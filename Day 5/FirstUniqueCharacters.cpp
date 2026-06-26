#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s = "leetcode";
    unordered_map<char,int> mp;
    for(char ch : s){
        mp[ch]++;
    }
    for(int i = 0; i < s.length(); i++){
        if(mp[s[i]] == 1){
            cout <<i<<endl;
        }
    }
    cout << -1<<endl;
}