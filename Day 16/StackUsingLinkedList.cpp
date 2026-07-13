#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return head->val;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return head->val;
    }

    bool isEmpty(){
        return head == NULL;
    }

    int getSize(){
        return size;
    }
    
    void display(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Size : " << st.getSize() << endl;
    cout << "Top : " << st.top() << endl;
    st.display();
    st.pop();
    cout << "After Pop" << endl;
    cout << "Size : " << st.getSize() << endl;
    cout << "Top : " << st.peek() << endl;
    st.display();
}