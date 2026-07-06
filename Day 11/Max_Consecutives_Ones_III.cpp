#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int n = nums.size();
    int flips = 0;
    int i = 0, j = 0;
    int maxLen = INT_MIN;
    int len = INT_MIN;
    while(j < n){
        if(nums[j] == 1){
            j++;
        }
        else{
            if(flips < k){
                flips++;
                j++;
            }
            else{
                len = j - i;
                maxLen = max(maxLen, len);
                while(nums[i] == 1)
                    i++;
                i++;
                j++;
            }
        }
    }
    len = j - i;
    maxLen = max(maxLen, len);
    cout << maxLen << endl;
}