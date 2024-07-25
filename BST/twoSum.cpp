//https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTab=0&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION
//Two Sum in a BST

//Find inorder traversal of BST and then using two pointers check if target sum is equal to sum of two nodes
//TC=> O(n), SC=>O(n)
/*

void inOrder(BinaryTreeNode<int>* root, vector<int> &arr){
    if(root==NULL){
        return;
    }
    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> arr;
    inOrder(root, arr);
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            return true;
        }
        if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}


*/