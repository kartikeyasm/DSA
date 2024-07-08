#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};
//Using Recursion
Node* buildTree(Node* root){  
    int data;
    cout<<"Enter Value: ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    
    //Left  
    cout<<"Enter Data for left subtree of "<<data<<endl;
    root->left=buildTree(root->left);


    //Right
    cout<<"Enter Data for right subtree of "<<data<<endl;
    root->right=buildTree(root->right);


    return root;
}

Node* buildLvlOrder(Node* root){
    queue<Node*> q;
    cout<<"Enter data for root ";
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    q.push(root);
    
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        int leftData;
        cout<<"Enter data for left of "<<temp->data;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }
        
        int rightData;
        cout<<"Enter data for left of "<<temp->data;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }
    }
    return root;
    
}



void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();

        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" , ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}


void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" , ";
    inOrderTraversal(root->right);
}


int main(){
    Node* root=NULL;
    /* 
    root=buildTree(root);
    //5 4 3 -1 2 -1 -1 1 -1 -1 0 -1 -1
     */
    
    root=buildLvlOrder(root);
    // 5 4 0 3 1 -1 -1 -1 2 -1 -1 -1 -1

    cout<<"Building Done"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;

    return 0;
}