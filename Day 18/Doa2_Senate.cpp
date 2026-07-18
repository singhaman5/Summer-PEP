// Leetcode - 649

#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string s) {

        queue<int> q;
        queue<int> r;
        queue<int> d;

        for (int i = 0; i < s.length(); i++) {

            q.push(i);

            if (s[i] == 'R') {
                r.push(i);
            }
            else {
                d.push(i);
            }
        }

        while (q.size() > 1) {

            if (s[q.front()] == 'X') {
                q.pop();
            }

            else if (s[q.front()] == 'R') {

                if (d.empty()) {
                    return "Radiant";
                }

                s[d.front()] = 'X';
                d.pop();

                q.push(q.front());
                q.pop();

                r.push(r.front());
                r.pop();
            }

            else {

                if (r.empty()) {
                    return "Dire";
                }

                s[r.front()] = 'X';
                r.pop();

                q.push(q.front());
                q.pop();

                d.push(d.front());
                d.pop();
            }
        }

        if (s[q.front()] == 'R') {
            return "Radiant";
        }

        return "Dire";
    }
};

int main() {

    Solution obj;

    string senate = "RDD";

    cout << "Input  : " << senate << endl;
    cout << "Winner : " << obj.predictPartyVictory(senate) << endl;
}