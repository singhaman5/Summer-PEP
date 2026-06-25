// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9] = {1,3,4,6,7,8,9,10,11};
//     int n = (sizeof(arr)/sizeof(arr[0]));
//     int lo=0, hi=n-1;
//     int target = 4;
//     int ceil = -1;
//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         if(arr[mid] >= target){
//             ceil = arr[mid];
//             lo = mid + 1;
//         }
//         else{
//             hi = mid - 1;
//         }
//     }
//     cout<<ceil<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1,3,4,6,7,8,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0, hi = n-1;
    int target = 4;
    int ceil = -1;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] >= target){
            ceil = arr[mid];
            hi = mid - 1;
        }
        else{
            lo = mid + 1;   // go right
        }
    }
    cout << ceil << endl;
    return 0;
}