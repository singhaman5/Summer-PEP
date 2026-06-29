// Using Two Pointer method

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s = "Today is Monday";
    reverse(s.begin(), s.end());
    int start = 0;
    for(int i=0; i<=s.length(); i++){
        if(i == s.length() || s[i] == ' '){
            reverse(s.begin()+start, s.begin()+i);
            start = i+1;
        }
    }
    cout << s;
}



// #include<iostream>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main(){
//     string s = "Today is Monday";
//     string word;
//     vector<string> words;
//     stringstream ss(s);
//     while(ss>>word){
//         words.push_back(word);
//     }
//     for(int i=words.size()-1; i>=0; i--){
//         cout<<words[i]<<" ";
//     }
// }

















