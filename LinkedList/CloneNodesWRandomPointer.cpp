#include<iostream>
#include<vector>

using namespace std;


//Q Clone a linked list with next and random pointer [https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1]
/*
You are given a special linked list with N nodes where each node has a next pointer pointing to its next node. You are also given M random pointers, where you will be given M number of pairs denoting two nodes a and b  i.e. a->arb = b (arb is pointer to random node).
Construct a copy of the given list. The copy should consist of exactly N new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
*/

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

//1st Approach Create a LL whith original list data and next ptr, then using O(n^2) scanning pt arb pointer towards the correct nodes [O(n^2), O(n) without map]
/* 
Node *copyList(Node *head){
    //Write your code here

    return head;

}
 */



//2nd Approach Create a mapping of nodes of original nodes to thier copy nodes and with the help of mapping pt arb pointer towards correct clone node  [O(n), O(n) with map]
/* 
Node *copyList(Node *head)
    {
        //Write your code here
        if(head==NULL){
            return NULL;
        }
        Node* copyHead=new Node(head->data);
        Node* copyTemp=copyHead;
        Node* temp=head;
        map<Node*, Node*> m;
        m[head]=copyHead;
        while(temp->next!=NULL){
            copyTemp->next=new Node(temp->next->data);
            copyTemp=copyTemp->next;
            temp=temp->next;
            m[temp]=copyTemp;
        }
        temp=head;
        copyTemp=copyHead;
        while(temp!=NULL){
            copyTemp->arb=m[temp->arb];
            
            copyTemp=copyTemp->next;
            temp=temp->next;
        }
        return copyHead;
    }
 */        



//3rd Approach without map create clone nodes and add thenm in between original list and then using arb pointer of original list point clones arb pointer to their correct position  (temp->next->arb=temp->arb->next)   [O(n), O(n) but whithout map]
/* 
Node* addCloneNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        Node* clone=new Node(temp->data+10);
        Node* current=temp->next;
        temp->next=clone;
        clone->next=current;
        temp=current;
    }
    return head;
}

Node *copyList(Node *head){
        // Write your code here
    if (head == NULL){
        return NULL;
    }
    head = addCloneNodes(head);
    Node *temp = head;
    while (temp != NULL){
        if (temp->arb != NULL){
        temp->next->arb = temp->arb->next;
        }
        temp = temp->next->next;
    }
    Node *cloneHead = head->next;
    temp = head;
    Node *cloneTemp = cloneHead;
    while (cloneTemp != NULL && temp != NULL){
        temp->next = cloneTemp->next;
        temp = temp->next;
        if (temp != NULL){
            cloneTemp->next = temp->next;
        }
        cloneTemp = cloneTemp->next;
    }
    return cloneHead;
}
 */
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    printLL(head);
    //head=addCloneNodes(head);
    printLL(head);
    Node* temp=head->next;
    while(temp->next!=NULL){
        temp->next=temp->next->next;
        temp=temp->next;
    }
    printLL(head->next);
    return 0;
}




