#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string s = "egg";
    string t = "add";
    if(s.length() != t.length()){
        cout << "false";
        return 0;
    }
    unordered_map<char, char> mp1, mp2;
    for(int i = 0; i < s.size(); i++){
        if(mp1.find(s[i]) != mp1.end() && mp1[s[i]] != t[i]){
            cout << "false";
            return 0;
        }
        if(mp2.find(t[i]) != mp2.end() && mp2[t[i]] != s[i]){
            cout << "false";
            return 0;
        }
        mp1[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }
    cout << "true";
}