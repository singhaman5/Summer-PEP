#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> nums = {10, 4, 8, 3};
    vector<int> ans;
    int totalSum = 0;
    for(int x : nums){
        totalSum += x;
    }
    int leftSum = 0;
    for(int x : nums){
        totalSum -= x;
        ans.push_back(abs(leftSum - totalSum));
        leftSum += x;
    }
    for(int x : ans){
        cout << x << " ";
    }
}