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
Node* mergeTwoLists(Node* list1, Node* list2){
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    if(list1->data <= list2->data){
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else{
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}
int main(){
    // First List: 1 -> 2 -> 4
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(4);
    // Second List: 1 -> 3 -> 4
    Node* list2 = new Node(1);
    list2->next = new Node(3);
    list2->next->next = new Node(4);
    Node* ans = mergeTwoLists(list1, list2);
    while(ans != NULL){
        cout << ans->data << " ";
        ans = ans->next;
    }
}