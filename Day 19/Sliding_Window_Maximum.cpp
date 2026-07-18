#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k){
    if(k == 1) return nums;
    int n = nums.size();
    deque<int> dq;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        while(!dq.empty() && nums[i] > nums[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        int j = i - k + 1;
        while(!dq.empty() && dq.front() < j){
            dq.pop_front();
        }
        if(i >= k - 1){
            ans.push_back(nums[dq.front()]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = maxSlidingWindow(nums, k);
    for(int x : ans){
        cout << x << " ";
    }
}