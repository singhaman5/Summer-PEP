#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 3;
    vector<vector<int>> arr(n, vector<int>(n));
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int count = 1;
    while(minr <= maxr && minc <= maxc){
        // Right
        for(int j = minc; j <= maxc; j++){
            arr[minr][j] = count++;
        }
        minr++;
        // Down
        for(int i = minr; i <= maxr; i++){
            arr[i][maxc] = count++;
        }
        maxc--;
        // Left
        if(minr <= maxr){
            for(int j = maxc; j >= minc; j--){
                arr[maxr][j] = count++;
            }
            maxr--;
        }
        // Up
        if(minc <= maxc){
            for(int i = maxr; i >= minr; i--){
                arr[i][minc] = count++;
            }
            minc++;
        }
    }
    // Print matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}