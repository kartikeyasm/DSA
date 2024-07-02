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


void printLL(Node* &head){
    Node* temp=head;
    cout<<"Head -> ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* insertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
    return head;
}


Node* reverse(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* current=head;
    while(current!=NULL){
        Node* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}


Node* reverseRecursive1(Node* head, Node* prev=NULL){
    if(head==NULL){
        head=prev;
        return head;
    }
    Node* current=head;
    Node* next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    head=current;
    return reverseRecursive1(head,prev);
}



Node* rev2(Node* head, Node* current, Node* prev){
    if(current==NULL){
        head=prev;
        return head;
    }
    Node* next=current->next;
    head=rev2(head,next, current);
    current->next=prev;
    return head;
}
Node* reverseRecursive2(Node* head){
    Node* current=head;
    Node* prev=NULL;
    head=rev2(head,current,prev);
    return head;
}


Node* rev3(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* tempHead=rev3(head->next);
    head->next->next=head;
    head->next=NULL;
    return tempHead;
}

Node* reverseRecursive3(Node* head){
    return rev3(head);
}


int main(){
    Node* head=NULL;

    head=insertAtHead(head,5);
    head=insertAtHead(head,4);
    head=insertAtHead(head,3);
    head=insertAtHead(head,2);
    head=insertAtHead(head,1);
    printLL(head);
    head=reverse(head);
    printLL(head);
    head=reverseRecursive1(head);
    printLL(head);
    head=reverseRecursive2(head);
    printLL(head);
    head=reverseRecursive3(head);
    printLL(head);
    return 0;
}












