#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>


using namespace std;

class node{
    public:    
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" , ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" , ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" , ";
    postOrder(root->left);
    postOrder(root->right);
}

void lvlOrder(node* root){
    if(!root){
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" , ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

node* buildTree(node* root){
    int data;
    cout<<"Enter Data: ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root = new node(data);
    cout<<"Enter data to the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data to the right of "<<data<<endl;
    root->right = buildTree(root->right);
}

node* lvlBuild(node* root){
    queue<node*> q;
    int data;
    cout<<"Enter root node data: ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root= new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        if(temp==NULL){
            continue;
        }
        int l,r;
        cout<<"Enter data to left of "<<temp->data<<" :";
        cin>>l;
        cout<<"Enter data to right of "<<temp->data<<" :";
        cin>>r;
        if(l!=-1){
            temp->left=new node(l);
            q.push(temp->left);
        }
        if(r!=-1){
            temp->right=new node(r);
            q.push(temp->right);
        }
    }
    return root;
}

void countLeave(node* root, int &ans){
    if(root==NULL){
        return;
    }
    if(!root->left && !root->right){
        ans++;
        return;
    }
    countLeave(root->left, ans);
    countLeave(root->right, ans);
}

int height(node* root){
    if(!root){
        return 0;
    }
    int left= height(root->left);
    int right= height(root->right);
    return max(left,right)+1;

}
/*
int diameter(node* root){
    if(!root){
        return 0;
    }
    int op1= diameter(root->left);
    int op2= diameter(root->right);
    int op3= height(root->left)+height(root->right)+1;
    return max(op1,max(op2,op3));
}
*/

pair<int,int> diameter(node* root){
    if(!root){
        return {0,0};
    }

    pair<int,int> left = diameter(root->left);
    pair<int,int> right = diameter(root->right);
    int op1=left.first;
    int op2=right.first;
    int op3=left.second + right.second + 1;
    pair<int,int> ans;
    ans.first = max(op1, max(op2,op3));
    ans.second = max(left.second,right.second)+1;
    return ans;
}

pair<bool,int> isBalanced(node* root){
    if(!root){
        return {true,0};
    }
    pair<bool,int> left = isBalanced(root->left);
    pair<bool,int> right = isBalanced(root->right);

    bool isLeft = left.first;
    bool isRight = right.first;
    bool isNode = abs(left.second-right.second)<=1;

    int height=max(left.second,right.second)+1;
    if(isLeft && isRight && isNode){
        return {true,height};
    }
    else{
        return {false,height};
    }
}

bool isIdentical(node* root1, node* root2){
    if(!root1 && !root2){
        return true;
    }
    if(root1 && !root2){
        return false;
    }
    if(!root1 && root2){
        return false;
    }

    bool left = isIdentical(root1->left, root2->left);
    bool right = isIdentical(root1->right, root2->right);
    bool node= root1->data == root2->data;
    if(left && right && node){
        return true;
    }
    else{
        return false;
    }
}

pair<bool,int> checkSum(node* root){
    if(!root){
        return {true,0};
    }
    if(!root->left && !root->right){
        return {true, root->data};
    }

    pair<bool,int> left = checkSum(root->left);
    pair<bool,int> right = checkSum(root->right);

    if(left.first && right.first && (root->data==left.second+right.second)){
        return {true, root->data+left.second+right.second};
    }
    else{
        return {false, root->data+left.second+right.second};
    }

}

vector<int> zigZag(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    bool leftToRight=true;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> lvl;
        for(int i=0;i<size;i++){
            node* temp=q.front();
            q.pop();
            lvl.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        if(leftToRight){
            for(int i=0;i<size;i++){
                ans.push_back(lvl[i]);
            }
        }
        else{
            for(int i=size-1;i>=0;i--){
                ans.push_back(lvl[i]);
            }
        }
        leftToRight = !leftToRight;
    }
    return ans;
}


/*
void leftTravel(node* root, vector<int> &ans){
    if(!root || !root->left && !root->right){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        leftTravel(root->left, ans);
    }
    else{
        leftTravel(root->right, ans);
    }
}

void rightTravel(node* root, vector<int> &ans){
    if(!root || !root->left && !root->right){
        return;
    }
    ans.push_back(root->data);
    if(root->right){
        rightTravel(root->right, ans);
    }
    else{
        rightTravel(root->left, ans);
    }
}

void leafTravel(node* root, vector<int> &ans){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    leafTravel(root->left, ans);
    leafTravel(root->right, ans);
}

vector<int> boundary(node* root){
    vector<int> ans;
    leftTravel(root, ans);
    leafTravel(root, ans);
    int size= ans.size();
    rightTravel(root, ans);
    int finalSize= ans.size();
    int j=0;
    for(int i=size; i<(finalSize+size)/2;i++){
        swap(ans[i], ans[finalSize-j-1]);
        j++;
    }
    ans.pop_back();
    return ans;
}

*/

vector<int> verticalOrder(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    unordered_map<int,vector<int>> mp;
    queue<pair<node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        pair<node* , int> temp=q.front();
        q.pop();
        int HD = temp.second;
        node* node= temp.first;
        mp[HD].push_back(node->data);
        if(node->left){
            q.push({node->left, HD-1});
        }
        if(node->right){
            q.push({node->right, HD+1});
        }
    }

    for(auto i: mp){
        for(auto j: i.second){
            ans.push_back(j);
        }
    }
    return ans;

}

vector<int> topView(node* root){
    if(!root){
        return {};
    }
    vector<int> ans;
    unordered_map<int, int> mp;
    queue<pair<node*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        pair<node* , int> temp= q.front();
        q.pop();
        node* tempNode= temp.first;
        int HD = temp.second;
        if(mp[HD]==0){
            mp[HD]=tempNode->data;
        }
        if(tempNode->left){
            q.push({tempNode->left, HD-1});
        }
        if(tempNode->right){
            q.push({tempNode->right, HD+1});
        }
    }
    for(auto i: mp){
        ans.push_back(i.second);
    }
    return ans;
}

vector<int> bottomView(node* root){
    if(!root){
        return {};
    }
    vector<int> ans;
    unordered_map<int,int> mp;
    queue<pair<node*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        pair<node* , int> temp = q.front();
        q.pop();
        node* tempNode = temp.first;
        int HD= temp.second;
        mp[HD]=tempNode->data;

        if(tempNode->left){
            q.push({tempNode->left, HD-1});
        }
        if(tempNode->right){
            q.push({tempNode->right, HD+1});
        }
    } 
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
}




int main(){
    node* root=new node(4);
    root->left=new node(2);
    root->right=new node(6);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(7);
    //node* root2= new node(5);
    
/*
    root=lvlBuild(root);
    lvlOrder(root);
    
    int count=0;
    countLeave(root, count);
    cout<<"No. of leaves= "<<count<<endl;
    
    cout<<"Height of tree= "<<height(root)<<endl;
    
    cout<<"Diameter of tree= "<<diameter(root).first<<endl;
    
    isBalanced(root).first? cout<<"Tree is balanced"<<endl : cout<<"Tree is unbalanced"<<endl;
    
    //isIdentical(root,root2)? cout<<"Trees are identical"<<endl : cout<<"Trees are not identical"<<endl;
    
    vector<int> ans=zigZag(root);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;  

    vector<int> ans = boundary(root);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;

    vector<int> ans = verticalOrder(root);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;

    vector<int> ans = topView(root);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;
*/
    vector<int> ans = bottomView(root);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;

    return 0;
}