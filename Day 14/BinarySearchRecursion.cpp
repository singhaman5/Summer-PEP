#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> &nums, int left, int right, int target){
    if(left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if(nums[mid] == target)
        return mid;
    if(target < nums[mid])
        return binary(nums, left, mid - 1, target);
    return binary(nums, mid + 1, right, target);
}

int main(){
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;
    int ans = binary(nums, 0, nums.size() - 1, target);
    cout << ans << endl;
    return 0;
}