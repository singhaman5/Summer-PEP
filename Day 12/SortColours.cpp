#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int n = nums.size();
    int lo = 0;
    int mid = 0;
    int hi = n - 1;
    while(mid <= hi){
        if(nums[mid] == 0){
            swap(nums[lo], nums[mid]);
            lo++;
            mid++;
        }
        else if(nums[mid] == 1){

            mid++;
        }
        else{
            swap(nums[mid], nums[hi]);
            hi--;
        }
    }
    for(int x : nums){
        cout << x << " ";
    }
}