#include<iostream>
using namespace std;
double power(double x, long long n){
    if(n == 0) return 1;
    double half = power(x, n / 2);
    if(n % 2 == 0){
        return half * half;
    }
    return x * half * half;
}

int main(){
    double x = 2.0;
    int n = 10;
    long long N = n;
    if(N < 0){
        x = 1 / x;
        N = -N;
    }
    cout << power(x, N) << endl;
    return 0;
}