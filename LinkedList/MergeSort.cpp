#include<iostream>
#include<vector>

using namespace std;

// Divide list using slow and fast pointers and then using recursive call we can divide list and then using the concept of merge two sorted list we can merge them
// T=> O(nlogn) 
// S=> O(logn)  [O(1+logn)]  O(1) for space used by nodes and O(logn) for recursive stack call 


class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void printLL(Node* &head){
    Node* temp=head;
    cout<<"Head -> ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* solve(Node* left, Node* right){
    
    Node* prevL=left;
    Node* currL=left->next;
    Node* prevR=right;
    while(currL!=NULL && prevR!=NULL){
        if(prevL->data<=prevR->data && prevR->data<currL->data){
            Node* currR=prevR->next;
            prevL->next=prevR;
            prevR->next=currL;
            prevL=prevR;
            prevR=currR;

        }
        else{
            prevL=prevL->next;
            currL=currL->next;
        }
    }
    if(currL==NULL){
        prevL->next=prevR;
    }
    return left;
}

Node* merge(Node* left, Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    if(left->data<=right->data){
        return solve(left,right);
         
    }
    else if(left->data>right->data){
        return solve(right,left); 
    }
}


Node *sortLL(Node *head){
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    Node* right=slow->next;
    slow->next=NULL;
    Node* left=head;
    left=sortLL(left);
    right=sortLL(right);
    left=merge(left,right);
    return left;
}


int main(){
    Node* head=new Node(5);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(7);
    head->next->next->next->next=new Node(1);
    printLL(head);
    head=sortLL(head);
    printLL(head);
    return 0;
}