#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s1 = "aman";
    string s2 = "nama";
    if(s1.length() != s2.length()){
        cout<<"It is not a valid anagram";
    }

    unordered_map<char,int> mp;
    for(char ch: s1){
        mp[ch]++;
    }
    for(char ch: s2){
        mp[ch]--;
        if(mp[ch]<0){
            cout<<"Not an anagram";
        }
    }
    cout<<"It is a valid Anagram"<<endl;
}