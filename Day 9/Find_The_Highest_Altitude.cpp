#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> gain = {-5, 1, 5, 0, -7};
    int altitude = 0;
    int ans = 0;
    for(int x : gain){
        altitude += x;
        ans = max(ans, altitude);
    }
    cout << ans << endl;
}