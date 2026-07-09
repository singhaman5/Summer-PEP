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
Node* reverseList(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* Next = NULL;
    while(curr != NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}

Node* addTwoNumbers(Node* l1, Node* l2){
    Node* r1 = reverseList(l1);
    Node* r2 = reverseList(l2);
    int carry = 0;
    Node* head = NULL;
    Node* tail = NULL;
    while(r1 != NULL || r2 != NULL || carry){
        int sum = carry;
        if(r1 != NULL){
            sum += r1->data;
            r1 = r1->next;
        }
        if(r2 != NULL){
            sum += r2->data;
            r2 = r2->next;
        }
        carry = sum / 10;
        Node* temp = new Node(sum % 10);
        if(head == NULL){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    return reverseList(head);
}

int main(){
    // First number: 7243
    Node* l1 = new Node(7);
    l1->next = new Node(2);
    l1->next->next = new Node(4);
    l1->next->next->next = new Node(3);
    // Second number: 564
    Node* l2 = new Node(5);
    l2->next = new Node(6);
    l2->next->next = new Node(4);
    Node* ans = addTwoNumbers(l1, l2);
    while(ans != NULL){
        cout << ans->data << " ";
        ans = ans->next;
    }
}