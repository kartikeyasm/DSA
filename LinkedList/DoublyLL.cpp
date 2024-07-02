#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
};
 
Node* insertAtHead(Node* head, int data){
    Node* temp=new Node(data);

    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
    return head; 
}

void printDLL(Node* head){
    cout<<"Head <-> ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    Node* head=NULL;
    head=insertAtHead(head,5);
    head=insertAtHead(head,5);
    head=insertAtHead(head,5);
    head=insertAtHead(head,5);
    printDLL(head);
    return 0;
}


