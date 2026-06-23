#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int left = 0, right = n-1;
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}