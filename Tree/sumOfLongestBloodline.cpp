//Q Sum of Longest Bloodline
//https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

/*

void solve(Node* root, int height, int sum, pair<int,int> &ans){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        sum+=root->data;
        if(height>ans.first){
            ans={height,sum};
        }
        else if(height==ans.first && sum>ans.second){
            ans={height,sum};
        }
        return;
    }
    solve(root->left,height+1,sum+root->data, ans);
    solve(root->right,height+1,sum+root->data, ans);
    
}


int sumOfLongRootToLeafPath(Node *root)
{
    //code here
    int height=0;
    int sum=0;
    pair<int,int> ans;
    solve(root,height,sum, ans);
    return ans.second;
}


*/