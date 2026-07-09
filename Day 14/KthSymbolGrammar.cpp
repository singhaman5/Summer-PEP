#include<iostream>
using namespace std;
int kthGrammar(int n, int k){
    if(n == 1) return 0;
    int mid = 1<<(n - 2);
    if(k <= mid) return kthGrammar(n - 1, k);
    return !kthGrammar(n - 1, k - mid);
}

int main(){
    int n = 4;
    int k = 5;
    cout << kthGrammar(n, k);
}