#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,5,7,9};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int target = 5;
    int lo=0, hi=n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return -1;
}