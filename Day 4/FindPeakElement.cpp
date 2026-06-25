#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,7,8,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int lo=0, hi=n-1;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1]){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<arr[lo]<<endl; // Returns the element
    cout<<lo<<endl; //Returns the index
}