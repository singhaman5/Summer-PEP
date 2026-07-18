// Leetcode - 1700

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int n = students.size();

        queue<int> q;

        for (int i = 0; i < n; i++) {
            q.push(students[i]);
        }

        int i = 0;
        int count = 0;

        while (!q.empty() && count != q.size()) {

            if (q.front() == sandwiches[i]) {

                q.pop();
                i++;
                count = 0;
            }
            else {

                q.push(q.front());
                q.pop();
                count++;
            }
        }

        return q.size();
    }
};

int main() {

    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    Solution obj;

    int ans = obj.countStudents(students, sandwiches);

    cout << "Students unable to eat: " << ans << endl;

    return 0;
}