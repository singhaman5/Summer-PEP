#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums){

    int n = nums.size();

    vector<int> ans(n, -1);

    stack<int> st;

    for(int i = 2 * n - 1; i >= 0; i--){

        int idx = i % n;

        while(!st.empty() && nums[st.top()] <= nums[idx]){
            st.pop();
        }

        if(!st.empty()){
            ans[idx] = nums[st.top()];
        }

        st.push(idx);
    }

    return ans;
}

int main(){
    vector<int> nums = {1, 2, 1};
    vector<int> ans = nextGreaterElements(nums);
    for(int x:ans){
        cout << x << " ";
    }
}