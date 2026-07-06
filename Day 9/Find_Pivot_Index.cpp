#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int n = nums.size();
    int ls = 0;
    int rs = 0;
    // Calculate total sum
    for(auto x : nums)
        rs += x;
    // Find pivot index
    for(int i = 0; i < n; i++){
        rs -= nums[i];
        if(ls == rs){
            cout << i << endl;
            return 0;
        }
        ls += nums[i];
    }
    cout << -1 << endl;
}