#include <iostream>
#include <map>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string countOfAtoms(string formula) {

        map<string, int> mp;
        stack<map<string, int>> st;

        int n = formula.size();

        for (int i = 0; i < n;) {

            if (formula[i] == '(') {

                st.push(mp);
                mp.clear();
                i++;
            }

            else if (formula[i] == ')') {

                i++;

                int num = 0;

                while (i < n && isdigit(formula[i])) {
                    num = num * 10 + (formula[i] - '0');
                    i++;
                }

                if (num == 0) {
                    num = 1;
                }

                for (auto& x : mp) {
                    x.second *= num;
                }

                auto temp = st.top();
                st.pop();

                for (auto& x : mp) {
                    temp[x.first] += x.second;
                }

                mp = temp;
            }

            else {

                string atom;
                atom += formula[i++];

                while (i < n && islower(formula[i])) {
                    atom += formula[i++];
                }

                int num = 0;

                while (i < n && isdigit(formula[i])) {
                    num = num * 10 + (formula[i] - '0');
                    i++;
                }

                if (num == 0) {
                    num = 1;
                }

                mp[atom] += num;
            }
        }

        string ans;

        for (auto& x : mp) {

            ans += x.first;

            if (x.second > 1) {
                ans += to_string(x.second);
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    string formula = "K4(ON(SO3)2)2";

    cout << "Formula: " << formula << endl;
    cout << "Output : " << obj.countOfAtoms(formula) << endl;
}