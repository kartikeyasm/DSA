//Q Tree Boundary Traversal

//https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1


/*  


void leftTraversal(Node* root, vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        leftTraversal(root->left,ans);
    }
    else{
        leftTraversal(root->right,ans);
    }
    
}

void leafTraversal(Node* root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    leafTraversal(root->left,ans);
    leafTraversal(root->right,ans);
}

void rightTraversal(Node* root, vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->right){
        rightTraversal(root->right,ans);
    }
    else{
        rightTraversal(root->left,ans);
    }
    ans.push_back(root->data);
}

vector <int> boundary(Node *root)
{
    //Your code here
    Node* temp=root;
    vector<int> ans;
    ans.push_back(temp->data);
    leftTraversal(temp->left, ans);
    leafTraversal(temp->left,ans);
    leafTraversal(temp->right,ans);
    rightTraversal(temp->right,ans);
    return ans;
}


*/