#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int lo=0, hi=n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>hi){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    cout<<arr[lo]<<endl;
}