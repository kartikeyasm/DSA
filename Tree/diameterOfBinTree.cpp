#include<iostream>
#include<vector>

using namespace std;

//Q Diameter of binary tree
//[https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1]

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

/* 
//Approach 1 Bruter Force O(n^2), O(h)

//It is happening because of recalculation of height in each iteration and this can be avoided if we calcualte height while calculation diameter only

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return (max(left,right)+1);
}

int diameter(Node* root) {
    // Your code here
    if(root==NULL){
        return 0;
    }
    int a=diameter(root->left);
    int b=diameter(root->right);
    int c=height(root->left)+1+height(root->right);
    
    return max(a,max(b,c));
}
*/


//2nd Approach Optimized O(N), O(h)
//It calculates height and diameter in a single call instead of nested calls using pair<int,int>
pair<int,int> diameterFast(Node* root){
    if(root==NULL){
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    pair<int,int> left=diameterFast(root->left);
    pair<int,int> right=diameterFast(root->right);
    int a=left.first;
    int b=right.first;
    int c=left.second+1+right.second;
    pair<int,int> ans;
    ans.first=max(a,max(b,c));
    ans.second=max(left.second, right.second)+1;
    return ans;   
}

int diameter(Node* root) {
    // Your code here
    if(root==NULL){
        return 0;
    }    
    return diameterFast(root).first;
}




int main(){


    return 0;
}