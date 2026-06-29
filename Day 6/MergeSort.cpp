#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r){
    int temp[100];
    int i=l, j=m+1, k=0;
    while(i<=m && j<=r){
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=m)
        temp[k++]=a[i++];
    while(j<=r)
        temp[k++]=a[j++];
    for(int x=l; x<=r; x++)
        a[x]=temp[x-l];
}


void mergeSort(int a[], int l, int r){
    if(l>=r)
        return;
    int m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
}


int main(){
    int arr[]={5,3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int x:arr)
        cout<<x<<" ";
}