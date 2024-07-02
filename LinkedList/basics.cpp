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


//Insertion
Node* insertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
    return head;
}

Node* insertAtEnd(Node* &head, int data){
    Node* p=new Node(data);
    if(head==NULL){
        head=p;
        return head;
    }
    Node* q=head;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=p;    
    return head;
}

Node* insertAtIndex(Node* &head, int data, int index){
    if(index==0){
        head=insertAtHead(head,data);
        return head;
    }

    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    delete temp;
    if(index>count || index<0){
        cout<<"Enter Valid Index"<<endl;
        return head;
    }
    else if(index==count){
        head=insertAtEnd(head,data);
        return head;
    }
    Node* p=new Node(data);
    Node *q=head;
    while(index>1){
        q=q->next;
        index--;
    }
    p->next=q->next;
    q->next=p;
    return head;
}


//Deletion
Node* deleteHead(Node* &head){
    Node* p=head;
    head=head->next;
    delete p;
    return head;
}

Node* deleteTail(Node* &head){
    Node* p=head;
    Node* q=(p->next)->next;
    while(q!=NULL){
        p=p->next;
        q=q->next;
    }
    q=p->next;
    p->next=NULL;
    delete q;
    return head;
}

Node* deleteIndex(Node* head, int index){
    int count=0;
    Node* temp=head;

    //Count No of nodes.
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    if(index>=count || index<0){
        cout<<"Enter valid Index"<<endl;
        return head;
    }

    else if(index==0){
        head=deleteHead(head);
        return head;
    }
    else if(index==count-1){
        head=deleteTail(head);
        return head;
    }
    else{
        temp=head;
        while(index>1){
            temp=temp->next;
            index-=1;
        }
        Node* p=temp->next;
        temp->next=p->next;
        
        return head;
    }
}

Node* deleteMiddle(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        head=NULL;
        return head;
    }
    Node* p=head->next;
    Node* q=head;
    while(p!=NULL){
        if(p->next==NULL){
            p=p->next;
            break;
        }
        else if(p->next->next==NULL){
            p=p->next->next;
            break;
        }
        p=p->next->next;
        q=q->next;
    }
    Node* del=q->next;
    q->next=del->next;
    delete del;
    return head; 
}



int main(){
    Node *head=NULL;
    printLL(head);
    head=insertAtEnd(head,6);
    head=insertAtHead(head, 5);
    head=insertAtHead(head, 4);
    head=insertAtHead(head, 3);
    head=insertAtHead(head, 2);
    head=insertAtHead(head, 1);
    head=insertAtHead(head, 0);
    head=insertAtEnd(head,8);
    head=insertAtIndex(head,7,7);
    printLL(head);
    head=deleteIndex(head,7);
    printLL(head);
    head=deleteTail(head);
    head=deleteHead(head);
    printLL(head);
    return 0;
}