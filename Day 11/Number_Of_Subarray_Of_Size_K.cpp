// Leetcode 1343

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,2,2,2,5,5,5,8};
    int k = 3;
    int threshold = 4;
    int sum = 0;
    int count = 0;
    for(int i = 0; i < k; i++)
        sum += arr[i];
    if(sum >= k * threshold)
        count++;
    for(int i = k; i < arr.size(); i++){
        sum += arr[i];
        sum -= arr[i-k];
        if(sum >= k * threshold)
            count++;
    }
    cout << count << endl;
}