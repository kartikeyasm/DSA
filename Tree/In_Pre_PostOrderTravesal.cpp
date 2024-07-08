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

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" , ";
    inOrderTraversal(root->right);
}

void itrInOrder(Node* root){
    
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" , ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" , ";
}


int main(){
    Node* root=NULL;
    root=buildTree(root);
    //5 4 3 -1 2 -1 -1 1 -1 -1 0 -1 -1
    cout<<"Building Done"<<endl;
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;

    return 0;
}