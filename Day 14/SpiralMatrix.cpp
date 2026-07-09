#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m = matrix.size();
    int n = matrix[0].size();
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;
    vector<int> ans;
    while(minr <= maxr && minc <= maxc){
        // Right
        for(int j = minc; j <= maxc; j++){
            ans.push_back(matrix[minr][j]);
        }
        minr++;
        if(minr > maxr || minc > maxc)
            break;

        // Down
        for(int i = minr; i <= maxr; i++){
            ans.push_back(matrix[i][maxc]);
        }
        maxc--;
        if(minr > maxr || minc > maxc)
            break;

        // Left
        for(int j = maxc; j >= minc; j--){
            ans.push_back(matrix[maxr][j]);
        }
        maxr--;
        if(minr > maxr || minc > maxc)
            break;

        // Up
        for(int i = maxr; i >= minr; i--){
            ans.push_back(matrix[i][minc]);
        }
        minc++;
    }
    for(int x : ans){
        cout << x << " ";
    }
}