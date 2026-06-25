#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,8,1,9,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int mini = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    cout<<mini<<endl;
}