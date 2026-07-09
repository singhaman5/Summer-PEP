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
Node* merge(Node* a, Node* b){
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    while(a != NULL && b != NULL){
        if(a->data <= b->data){
            temp->next = a;
            a = a->next;
        }
        else{
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }
    if(a!=NULL)
        temp->next = a;
    else
        temp->next = b;
    return dummy->next;
}
Node* sortList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* left = head;
    Node* right = slow->next;
    slow->next = NULL;
    left = sortList(left);
    right = sortList(right);
    return merge(left, right);
}
int main(){
    // 4 -> 2 -> 1 -> 3
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);
    head = sortList(head);
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}