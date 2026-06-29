// Horizontal Scaling

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<string> strs = {"flower","flow","flight"};
//     string ans = strs[0];
//     for(int i=1; i<strs.size(); i++){
//         int j = 0;
//         while(j < ans.length() &&
//               j < strs[i].length() &&
//               ans[j] == strs[i][j]){

//             j++;
//         }
//         ans = ans.substr(0,j);
//         if(ans == "")
//             break;
//     }
//     cout << ans;
// }

// Short method
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> strs = {"flower","flow","flight"};
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size()-1];
    int i=0;
    while(i < first.size() &&
          first[i] == last[i]){

        i++;
    }
    cout << first.substr(0,i);
    return 0;
}