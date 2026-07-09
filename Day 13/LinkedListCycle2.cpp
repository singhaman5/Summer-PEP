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
Node* detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            flag = true;
            break;
        }
    }
    if(flag == false)
        return NULL;
    Node* temp = head;
    while(temp != slow){
        temp = temp->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    // Create: 3 -> 2 -> 0 -> -4
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);
    // Create cycle: -4 -> 2
    head->next->next->next->next = head->next;
    Node* ans = detectCycle(head);
    if(ans != NULL)
        cout << "Cycle starts at node: " << ans->data;
    else
        cout << "No Cycle";
}