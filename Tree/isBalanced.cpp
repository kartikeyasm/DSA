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


//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1



//Brute Force Approach O(n^2) O(h)
/* 
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL){
        return true;
    }
    bool left=isBalanced(root->left);
    bool right=isBalanced(root->right);
    int diff=abs(height(root->left)-height(root->right));
    if(left && right && (diff<=1)){
        return true;
    }
    
    else{
        return false;
    }
}

*/


//Optimized Approach O(n), O(h)
pair<bool,int> solve(Node* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    pair<bool,int> left=solve(root->left);
    pair<bool,int> right=solve(root->right);
    
    bool leftBool=left.first;
    bool rightBool=right.first;
    int diff=abs(left.second-right.second);
    pair<bool,int> p;
    p.second=max(left.second,right.second)+1;
    if(leftBool && rightBool && (diff<=1)){
        p.first=true;
        return p;
    }
    else{
        p.first=false;
        return p;
    }
    
}

//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL){
        return true;
    }
    return solve(root).first;
    
}



int main(){


    return 0;
}