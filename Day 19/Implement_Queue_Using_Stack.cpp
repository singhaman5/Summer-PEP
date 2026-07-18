#include<iostream>
#include<stack>
using namespace std;
class MyQueue{
public:
    stack<int> st;
    stack<int> helper;
    void push(int x){
        // Push at Bottom
        if(st.empty()){
            st.push(x);
            return;
        }
        while(!st.empty()){
            helper.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!helper.empty()){
            st.push(helper.top());
            helper.pop();
        }
    }

    int pop(){
        int x = st.top();
        st.pop();
        return x;
    }
    int peek(){
        return st.top();
    }

    bool empty(){
        return st.empty();
    }
};

int main(){
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front : "<<q.peek()<<endl;
    cout<<"Pop : "<<q.pop()<<endl;
    cout<<"Front : "<<q.peek()<<endl;
    cout<<"Is Empty : "<<q.empty()<<endl;
}