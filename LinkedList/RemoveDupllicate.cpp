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


//Remove Duplicates from sorted linked list
Node* removeDuplicates(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* del=temp->next;
            temp->next=del->next;
            delete del;
        }   
        else{
            temp=temp->next;   
        }
    }
    return head;
}




//1st Approach [Brute Force] O(n^2)
Node* removeDuplicatesUnsorted(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* i=head;
    while(i->next!=NULL){
        Node* prev=i;
        Node* j=i->next;
        while(j->next!=NULL){
            if(i->data==j->data){
                Node* del=j;
                prev->next=j->next;
                j=j->next;
                delete del;
            }
            else{
                prev=prev->next;
                j=j->next;
            }
        }
        i=i->next;
    }
    return head;
}


//2nd Approach [Using sorting] O(nLogn)
Node* removeDuplicatesUnsorted2(Node* head){
    //Sort using some O(nLogn)
    
    //return removeDuplicates(head);

}

//3rd Approach [Using Maps] O(n), O(1)
Node* removeDuplicatesUnsorted3(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp=head->next;
    Node* prev=head;
    map<int,int> m;
    m[prev->data]=1;
    while(temp!=NULL){
        if(m[temp->data]>=1){
            Node* del=temp;
            prev->next=temp->next;
            temp=temp->next;
            delete del;
        }
        else{
            m[temp->data]++;
            temp=temp->next;
            prev=prev->next;
        }
    }
    return head;
}



int main(){
    Node* head=NULL;
    head=new Node(0);
    head->next=new Node(1);
    head->next->next=new Node(5);
    head->next->next->next=new Node(1);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    printLL(head);
    head=removeDuplicatesUnsorted3(head);
    printLL(head);

    return 0;
}