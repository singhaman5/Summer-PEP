#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s = "aaaabbcccdddd";
    unordered_map<char,int> mp;
    for(char ch:s){
        mp[ch]++;
    }
    for(auto it: mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}