#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<string> words = {"bella","label","roller"};
    vector<int> freq(26,100);
    for(string s : words){
        vector<int> temp(26,0);
        for(char c : s)
            temp[c-'a']++;
        for(int i=0;i<26;i++)
            freq[i] = min(freq[i], temp[i]);
    }
    for(int i=0;i<26;i++){
        while(freq[i]--){
            cout << char(i+'a') << " ";
        }
    }
}