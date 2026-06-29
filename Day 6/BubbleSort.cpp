#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,6,9,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}