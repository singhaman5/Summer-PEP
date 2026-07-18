// Leetcode 739

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top() - i;
            }
            st.push(i);
        }

        return ans;
    }
};

int main() {
    vector<int> arr = {73, 74, 75, 71, 69, 72, 76, 73};
    Solution obj;
    vector<int> result = obj.dailyTemperatures(arr);
    cout << "Answer: ";
    for (int x : result) {
        cout << x << " ";
    }
}