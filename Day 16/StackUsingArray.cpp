#include<iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx = -1;
    void push(int val){
        if(isFull()){
            cout << "Stack is full!" << endl;
            return;
        }
        arr[++idx] = val;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return;
        }
        idx--;
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[idx];
    }

    int size(){
        return idx + 1;
    }

    void display(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return;
        }
        for(int i = 0; i <= idx; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty(){
        return idx == -1;
    }

    bool isFull(){
        return idx == 4;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[idx];
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;
    cout << st.top() << endl;
    // st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.display();
}