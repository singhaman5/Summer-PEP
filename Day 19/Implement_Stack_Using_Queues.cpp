#include<iostream>
#include<queue>
using namespace std;
class MyStack{
public:
    queue<int> q;
    void push(int x){
        q.push(x);
        int sz = q.size();
        while(sz > 1){
            q.push(q.front());
            q.pop();
            sz--;
        }
    }

    int pop(){
        int x = q.front();
        q.pop();
        return x;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};

int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.top() << endl;
    cout << st.empty() << endl;
}