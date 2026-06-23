// Two pointer approach

#include<iostream>
using namespace std;
int main(){
    int arr[8] = {1,0,2,0,3,0,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// Using count of Zeroes

#include<iostream>
using namespace std;
int main(){
    int arr[8] = {1,0,2,0,3,0,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count<n){
        arr[count] = 0;
        count++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}