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

int height(struct Node* node){
    // code here 
    if(node==NULL){
        return 0;
    }
    int left=height(node->left);   //Height of left subtree
    int right=height(node->right); //Height of right subtree
    return (max(left,right)+1);
}

