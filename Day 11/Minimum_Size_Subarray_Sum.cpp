#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int n = nums.size();
    int i = 0, j = 0;
    int sum = 0;
    int minLen = INT_MAX;
    while(j < n){
        sum += nums[j];
        while(sum >= target){
            minLen = min(minLen, j - i + 1);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if(minLen == INT_MAX)
        cout << 0;
    else
        cout << minLen;
}