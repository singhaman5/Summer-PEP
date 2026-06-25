#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,2,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    //First occurrence
    int first = -1;
    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            first = mid;
            hi = mid-1;
        }
        else if(arr[mid] < target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    //Last occurrence
    int last = -1;
    lo = 0;
    hi = n-1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            last = mid;
            lo = mid+1;
        }
        else if(arr[mid] < target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(first == -1){
        cout << "Element not found";
    }
    else{
        int count = last - first + 1;
        cout<<count<<endl;
    }
    return 0;
}