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

vector<Node*> divide(Node* head){
    vector<Node*> ans;
    if(head==NULL || head->next==NULL){
        ans.push_back(head);
        return ans;
    }
    Node* tempHead=head->next;
    int count=0;
    while(tempHead!=head){
        tempHead=tempHead->next;
        count++;
    }
    count++;
    int index=0;
    tempHead=head;
    Node* tempHead2=head->next;
    while(index<(count/2)-1){
        tempHead2=tempHead2->next;
        tempHead=tempHead->next;
        index++;
    }
    tempHead->next=head;
    Node* temp=tempHead2;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=tempHead2;
    ans.push_back(tempHead);
    ans.push_back(tempHead2);
    return ans;
}


int main(){
    Node* head=NULL;
    head=new Node(0);
    head->next=new Node(1);
    head->next->next=new Node(2);
    head->next->next->next=new Node(3);
    head->next->next->next->next=new Node(4);
    head->next->next->next->next->next=new Node(5);
    printLL(head);
    head->next->next->next->next->next->next=head;
    vector<Node*> ans=divide(head);
    //printLL(ans[0]);                      //Circular list 1st half
    //printLL(ans[1]);                      //Circular list 2nd half
    return 0;
}