#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public:

        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

class Stack {
    public:
        //Props
        Node* top;
        Node* head;
    public:
        //Constructor
        Stack(){
            top=NULL;
            head=top;
        }
        //Method
        void Push(int data){
            Node* temp=new Node(data);
            if(this->top==NULL){
                this->top=temp;
                return;
            }
            else{
                temp->data=data;
                this->top->next=temp;
                this->top=temp;
                return;
            }
        }

        void Pop(){
            if(this->top==NULL){
                cout<<"Stack is empty"<<endl;
                return;
            }
            else{
                Node* temp=head;
                while(temp->next!=this->top){
                    temp=temp->next;
                }
                this->top=temp;
                delete temp->next;
                temp->next=NULL;
                return;
            }
        }

        int Top(){
            if(this->top==NULL){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return this->top->data;
            }
        }

};

int main(){
    /* 
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(4);
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();                   
    cout<<s.top()<<endl;   //Empty stacks top would lead to TLE
    */
    Stack s;
    s.Push(5);
    s.Push(6);
    s.Push(7);
    s.Push(8);
    cout<<s.Top();
    s.Pop();
    cout<<s.Top();
    return 0;
}