//https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1


// TC=> O(n)  SC=>O(h)

/*

bool isCBT(struct Node* tree, int i, int totalNodes){
    if(tree==NULL){
        return true;
    }
    if(i>=totalNodes){
        return false;
    }
    else{
        bool left=isCBT(tree->left, i*2+1, totalNodes);
        bool right=isCBT(tree->right, i*2+2, totalNodes);
        return left && right ;
    }
    
}

bool isMaxOrder(struct Node* tree){
    if(tree==NULL){
        return true;
    }
    if(tree->left==NULL && tree->right==NULL){
        return true;
    }
    if(tree->right==NULL){
        if(tree->left->data < tree->data){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        bool left=isMaxOrder(tree->left);
        bool right=isMaxOrder(tree->right);
        bool leftCheck= tree->left->data < tree->data;
        bool rightCheck= tree->right->data < tree->data;
        
        return left && right && leftCheck && rightCheck;
        
    }
}

void count(struct Node* tree, int &cnt){
    if(tree==NULL){
        return;
    }
    cnt++;
    count(tree->left, cnt);
    count(tree->right, cnt);
    
}

bool isHeap(struct Node* tree) {
    // code here
    int n=0;
    count(tree, n);
    return isCBT(tree, 0, n) && isMaxOrder(tree);
    
}


*/