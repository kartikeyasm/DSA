#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

//Print
void printLL(Node* &head){
    Node* temp=head;
    cout<<"Head -> ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



//Complexoty= TC-> O(n) SC->O(1)
Node* floydCycle(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL){
        if(fast->next==NULL){
            return NULL;
        }
        fast=fast->next;
        if(fast->next==NULL){
            return NULL;
        }
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
            return fast;
        }

    }
    return NULL;
}

Node* loopNode(Node* head, Node* fast){
    Node* slow=head;
    Node* prev=NULL;
    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    return prev;
}



int main(){
    Node* head=NULL;
    head=new Node(0);
    head->next=new Node(1);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(4);
    head->next->next->next->next->next=new Node(5);
    head->next->next->next->next->next->next=head->next->next;
    //printLL(head);   //Loop present[infinite prinitng]
    Node* temp=floydCycle(head);
    loopNode(head,temp)->next=NULL;
    printLL(head);
    return 0;
}