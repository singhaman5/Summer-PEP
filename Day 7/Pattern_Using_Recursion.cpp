// // n = 5

// // 1
// // 6   2
// // 10  7   3
// // 13  11  8   4
// // 15  14  12  9   5

// #include<iostream>
// using namespace std;
// void printrows(int n, int row=1, int col=1, int num=1){
//     if(row>n){
//         return;
//     }
//     if(col <= row){
//         cout<<num<<" ";
//         printrows(n, row, col+1, num - col);
//     }
//     else{
//         cout<<endl;
//         printrows(n, row+1,1, num+(n-row));
//     }

// }
// int main(){
//     int n = 5;
//     printrows(n);
// }

#include <iostream>
using namespace std;
void printrows(int n, int row=1, int col=1, int num=1, int rowstart=1) {
    if (row>n) {
        return;
    }
    if (col<=row) {
        cout<<num<< " "; 
        printrows(n, row, col+1, num-(n-row+col), rowstart);
    } 
    else {
        cout<<endl;
        int nextRow = rowstart + (n-row+1);
        printrows(n, row+1, 1, nextRow, nextRow);
    }
}

int main() {
    int n = 5;
    printrows(n);
}
