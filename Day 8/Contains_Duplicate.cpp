#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 1};
    unordered_set<int> st;
    bool found = false;
    for(int num : nums){
        if(st.count(num)){
            found = true;
            break;
        }
        st.insert(num);
    }
    if(found)
        cout << "true";
    else
        cout << "false";
}