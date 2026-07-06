#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


int main(){
    string s = "tree";
    unordered_map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }
    vector<pair<char,int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });
    string ans = "";
    for(auto x : v){
        ans += string(x.second, x.first);
    }
    cout << ans;
}