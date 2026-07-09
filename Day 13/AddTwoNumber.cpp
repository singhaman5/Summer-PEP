#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* addTwoNumbers(Node* l1, Node* l2){
    Node* dummy = new Node(0);
    Node* temp = dummy;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry){
        int sum = carry;
        if(l1){
            sum += l1->data;
            l1 = l1->next;
        }
        if(l2){
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        temp->next = new Node(sum % 10);
        temp = temp->next;
    }
    return dummy->next;
}

int main(){
    // First number: 342 -> 2->4->3
    Node* l1 = new Node(2);
    l1->next = new Node(4);
    l1->next->next = new Node(3);
    // Second number: 465 -> 5->6->4
    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);
    Node* ans = addTwoNumbers(l1, l2);
    while(ans != NULL){
        cout << ans->data << " ";
        ans = ans->next;
    }
}