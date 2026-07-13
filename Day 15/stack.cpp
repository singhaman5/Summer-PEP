#include<iostream>
using namespace std;

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout<<"Top is: "<<st.top()<<endl;

    st.pop();
    cout<<"Top is: "<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    
    }
}