//Approach 1=> Inorder Treaversal and start building heap, O(NlogN)


//Approach 2=> Inorder Traversal and then store all the values into the tree in descending order  O(N)


//IMPORTANT
//Approach 3=> Inorder Traverasl and then store all the element using preOrder traversal O(N)    [https://www.geeksforgeeks.org/convert-bst-min-heap/]





//https://www.geeksforgeeks.org/problems/bst-to-max-heap/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//BST to MaxHeap

/*


void inOrder(Node* root, vector<int> &arr){
    if(!root){
        return;
    }
    inOrder(root->left, arr);
    arr.push_back(root->data);
    inOrder(root->right, arr);
}

void postOrder(Node* root, vector<int> &arr, int &i){
    if(!root){
        return;
    }
    postOrder(root->left, arr, i);
    postOrder(root->right, arr, i);
    root->data=arr[i];
    i++;
}

void convertToMaxHeapUtil(Node* root)
{
    // Your code goes here
    vector<int> arr;
    inOrder(root, arr);
    int i=0;
    postOrder(root, arr, i);
    
}


*/