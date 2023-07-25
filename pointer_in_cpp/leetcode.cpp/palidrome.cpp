#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

void insertNode(node* head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}


node* reverseLinkedList(node*head) {
    node*pre, *curr , *nex ;
    pre = NULL , curr = head , nex = curr->next ;
    while(curr != NULL) {
        curr->next = pre ;
        pre = curr ;
        curr = nex ;
        nex = curr->next ;
        
    }

    return pre ;
}


bool isPalindrome(node* head) {
     node*slow = head , *fast = head, *ptr = slow , *mid = head; 
     while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next ;
        fast = fast->next->next ;

     }

     

     slow->next = reverseLinkedList(slow->next) ;

     slow = slow->next ;

     while(slow != NULL) {
        if(mid != slow) return false ;
       
     }

     
     return true ;
     

}


void print(node*head) {
    while(head->next != NULL) {
        cout<<head->num<<"->" ;
        head=  head->next ;
    }
    cout<<head->num<<endl ;

}


int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,2);
    insertNode(head,1);
    print(head) ;
    // isPalindrome(head)? cout<<"True" : cout<<"False";

    return 0;
}