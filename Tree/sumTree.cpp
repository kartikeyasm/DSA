#include<iostream>
#include<vector>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


pair<bool,int> solve(Node* root){
    if(root==NULL){
        pair<bool,int> ans=make_pair(true,0);
        return ans;
    }

    if(root->left==NULL && root->right==NULL){
        pair<bool,int> ans;
        ans.first=true;
        ans.second=root->data;
        return ans;
    }
    
    pair<bool,int> leftAns=solve(root->left);
    pair<bool,int> rightAns=solve(root->right);
    
    bool isLeft=leftAns.first;
    bool isRight=rightAns.first;
    int sum=leftAns.second+rightAns.second;
    
    bool isNode=root->data==(sum);
    pair<bool,int> ans;
    ans.second=sum+root->data;
    if(isLeft && isRight && isNode){
        ans.first=true;
        return ans;
    }
    else{
        ans.first=false;
        return ans;
    }    
}


bool isSumTree(Node* root){
    // Your code here
    if(root==NULL){
        return true;
    }
    return solve(root).first;
}



int main(){


    return 0;
}