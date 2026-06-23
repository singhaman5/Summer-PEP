// // Two Pointer Approach

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


// Using Stack

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    stack<int> st;
    for(int i=0; i<n; i++){
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        arr[i] = st.top();
        st.pop();
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}