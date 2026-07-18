// Leetcode 1249

#include <iostream>
#include <stack>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        unordered_set<int> remove;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                }
                else {
                    remove.insert(i);
                }
            }
        }
        while (!st.empty()) {
            remove.insert(st.top());
            st.pop();
        }
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (remove.find(i) == remove.end()) {
                ans += s[i];
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    string s = "lee(t(c)o)de)";
    cout << "Original: " << s << endl;
    cout << "Valid   : "<<obj.minRemoveToMakeValid(s)<< endl;
}