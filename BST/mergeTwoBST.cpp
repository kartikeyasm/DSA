//Merge Two BST
//https://www.naukri.com/code360/problems/h_920474?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION

// O(m+n) , O(m+n)

/*


void inOrder(TreeNode* root, vector<int>& arr){
    if(root==NULL){
        return;
    }
    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}

vector<int> mergeSorted(vector<int> arr1, vector<int> arr2){
    int l1=arr1.size();
    int l2=arr2.size();
    vector<int> arr(l1+l2);
    int i=0;
    int j=0;
    int mainIndex=0;
    while(i<l1 && j<l2){
        if(arr1[i]<arr2[j]){
            arr[mainIndex++]=arr1[i++];
        }
        else{
            arr[mainIndex++]=arr2[j++];
        }
    }
    while(i<l1){
        arr[mainIndex++]=arr1[i++];
    }
    while(j<l2){
        arr[mainIndex++]=arr2[j++];
    }
    return arr;

}

TreeNode* tree(vector<int> arr, int s, int e){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
    TreeNode* root=new TreeNode(arr[mid]);
    root->left=tree(arr, s, mid-1);
    root->right=tree(arr, mid+1, e);
    return root;
}


vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> arr1;
    vector<int> arr2;
    inOrder(root1, arr1);
    inOrder(root2, arr2);
    vector<int> arr=mergeSorted(arr1, arr2);
    return arr;

//    int n=arr.size();
//    TreeNode* root=tree(arr, 0, n-1);
//    return root;
    
}

*/