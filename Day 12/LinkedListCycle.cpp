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
int main(){
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    // Create a cycle: 5 -> 3
    head->next->next->next->next->next = head->next->next;
    Node* slow = head;
    Node* fast = head;
    bool hasCycle = false;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            hasCycle = true;
            break;
        }
    }
    if(hasCycle) cout << "Cycle Found";
    else cout << "No Cycle";
}