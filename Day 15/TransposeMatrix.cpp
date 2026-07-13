#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> t(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            t[i][j] = matrix[j][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j = 0; j < m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}