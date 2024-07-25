#include<iostream>
#include<vector>

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

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" , ";
    inOrder(root->right);
}


void insertNode(Node* &root, int data){
    if(root==NULL){
        root=new Node(data);
        return;
    }    
    if(root->data>data){
        insertNode(root->left, data);
    }
    else if(root->data<data){
        insertNode(root->right, data);
    }
}

//Recursive O(h) and O(h)
bool searchInBST(Node *root, int x) {
    // Write your code here.
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return searchInBST(root->left, x);
    }
    else{
        return searchInBST(root->right, x);
    }
}

//Optimized
//Iterativ O(h) and O(1)
bool searchInBST(Node *root, int x) {
    // Write your code here.
    while(root!=NULL){
        if(root->data==x){
            return true;
        }
        if(root->data>x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
}

int main(){


    return 0;
}