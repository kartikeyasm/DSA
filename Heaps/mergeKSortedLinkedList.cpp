//Q Merge K sorted linked list (Similar to mergeKSortedArrays.cpp)
//https://www.naukri.com/code360/problems/merge-k-sorted-lists_992772?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION



/* Brute Force, store all values in an array and sort them and then create a linked list



*/


/* O(N*KlogK)  O(k)
//sing min heap store first element of all linked list and then start pushing the next element of that linked list into heap

#include <queue>

//Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


class compare{
    public:
        bool operator()(Node* A, Node* B){
            return A->data > B->data;
        }
};

Node* mergeKLists(vector<Node*> &listArray)
{
    // Write your code here.
    priority_queue<Node*, vector<Node*>, compare> mini;
    Node* head=NULL;
    Node* tail=NULL;
    int k=listArray.size();
    for(int i=0;i<k;i++){
        mini.push(listArray[i]);
    }

    while(!mini.empty()){
        if(head==NULL){
            head=tail=mini.top();
            mini.pop();
            if(tail->next!=NULL){
                mini.push(tail->next);
            }
        }
        else{
            tail->next=mini.top();
            mini.pop();
            tail=tail->next;
            if(tail->next!=NULL){
                mini.push(tail->next);
            }
        }
    }
    return head;

}



*/