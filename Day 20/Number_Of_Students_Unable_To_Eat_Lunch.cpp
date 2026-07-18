// Leetcode -  1700

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;

        for (int student : students) {
            q.push(student);
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

    cout << "Students unable to eat: "
         << obj.countStudents(students, sandwiches) << endl;
}