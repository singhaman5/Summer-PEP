// Search in a rotated sorted array with more duplicates

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,1,2,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int target = 2;
    int lo=0, hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<"found"<<endl;
            return 0;
        }
        if(arr[lo] == arr[mid] && arr[mid] == arr[hi]){
            lo++; hi--;
        }
        else if(arr[lo] <= arr[mid]){
            if(arr[lo] <= target && target<=arr[mid]){
                hi = mid-1;
            }
            else{
                lo = mid +1;
            }
        }
        else{
            if(arr[mid] < target && target<=arr[hi]){
                lo=mid+1;
            }
            else hi = mid-1;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}