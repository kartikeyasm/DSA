#include<iostream>
#include<vector>
#include<queue>
#include<stack>
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

Node* buildTree(Node* root){
    int data;
    cout<<"Enter Value: ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    
    //Left  
    cout<<"Enter Data for left subtree of "<<data<<endl;
    root->left=buildTree(root->left);


    //Right
    cout<<"Enter Data for right subtree of "<<data<<endl;
    root->right=buildTree(root->right);


    return root;
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" , ";
    inOrderTraversal(root->right);
}

void itrInOrder(Node* root){
    
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" , ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" , ";
}



//Iterative

vector<int> preOrder(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* temp=s.top();
        s.pop();
        ans.push_back(temp->data);
        if(temp->left){
            s.push(temp->left);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
    return ans;
    /*
    stack<TreeNode*> s;
    vector<int> ans;
    while(!s.empty() || root){
        while(root){
            ans.push_back(root->val);
            s.push(root);
            root=rooe->left;
        }
        root=s.top();
        s.pop();
        root=root->right;
    }
    return ans;
    */

}


vector<int> inOrder(Node* root){
    stack<Node*> s;
    vector<int> ans;
    while(!s.empty() || root){
        while(root){
            s.push(root);
            root=root->left;
        }
        root=s.top();
        ans.push_back(root->data);

        s.pop();
        root=root->right;
    }
}


vector<int> postOrder(Node* root){
    /*
    vector<int> ans;
    stack<TreeNode*> s;
    TreeNode* lastVisited=NULL;
    while(!s.empty() || root){
        while(root){
            s.push(root);
            root=root->left;
        }
        TreeNode* temp=s.top();
        if(!temp->left || temp->right==lastVisited){
            ans.push_back(temp->val);
            s.pop();
            lastVisited=temp;
        }
        else{
            roor=temp->right;
        }
    }
    return ans;
    */
}










int main(){
    Node* root=NULL;
    root=buildTree(root);
    //5 4 3 -1 2 -1 -1 1 -1 -1 0 -1 -1
    cout<<"Building Done"<<endl;
    cout<<endl;
    inOrderTraversal(root);
    cout<<endl;

    return 0;
}