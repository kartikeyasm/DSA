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






int min(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}


int max(Node* root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root->data;
}












int main(){
    Node* root=NULL;
    int n;
    while(1){
        cout<<"Enter Node: ";
        cin>>n;
        if(n<0){
            break;
        }
        insertNode(root, n);
        
    }
    cout<<"Tree Constructed: ";
    inOrder(root);
    cout<<endl;
    return 0;
}