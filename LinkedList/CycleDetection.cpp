#include<iostream>
#include<vector>
#include<map>
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


//Complexoty= TC-> O(n) SC->O(n)
bool isCircular(Node* head){
    // Write your code here.
    Node* tempHead=head;
    map<Node*, bool> m;
    while(tempHead!=NULL){
        if(m[tempHead]==true){
            return true;
        }
        m[tempHead]=true;
        tempHead=tempHead->next;
    }
    return false;
}



//Complexoty= TC-> O(n) SC->O(1)
bool floydCycle(Node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL){
        if(fast->next==NULL){
            return false;
        }
        fast=fast->next;
        if(fast->next==NULL){
            return false;
        }
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }

    }
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
    cout<<floydCycle(head)<<endl;
    cout<<isCircular(head)<<endl;

    return 0;
}