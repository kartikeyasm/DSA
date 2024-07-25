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


int minVal(Node* root){
    while(root->left!=NULL){        
        root=root->left;   
    }
    return root->data;
}

Node* deleteNode(Node* root, int data){
    if(root==NULL){
        return root;
    }
    if(root->data==data){
        //Leaf Node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }

        //Non Leaf Node

        //Left Child
        if(root->left && !root->right){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //Right Child
        if(root->right && !root->left){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //Both Child
        if(root->right && root->left){
            int mini= minVal(root->right);
            root->data=mini;
            root->right=deleteNode(root->right, mini);
            return root;
        }
    }
    else if(root->data>data){
        root->left=deleteNode(root->left, data);
        return root;
        
    }
    else{
        root->right=deleteNode(root->right, data);
        return root;

    }
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
    deleteNode(root, 5);
    cout<<"Tree After Deletion: ";
    inOrder(root);
    cout<<endl;

    return 0;
}