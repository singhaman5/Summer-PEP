#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,8,2,3,9,6};
    int n = (sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
