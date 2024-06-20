#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> visited, int x, int y){
    if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0){
        return 1;
    }
    else{
        return 0;

    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, string output, vector<vector<int>> visited,int x, int y){
    if(x==n-1 && y==n-1){
        ans.push_back(output);
        return;
    }

    visited[x][y]=1;

    //Down
    int newx=x+1;
    int newy=y;
    if(isSafe(m,n,visited,newx,newy)){
        output.push_back('D');
        solve(m,n,ans,output,visited,newx,newy);
        output.pop_back();
    }

    //Left
    newx=x;
    newy=y-1;
    if(isSafe(m,n,visited,newx,newy)){
        output.push_back('L');
        solve(m,n,ans,output,visited,newx,newy);
        output.pop_back();
    }
    //Right
    newx=x;
    newy=y+1;
    if(isSafe(m,n,visited,newx,newy)){
        output.push_back('R');
        solve(m,n,ans,output,visited,newx,newy);
        output.pop_back();
    }

    //Up
    newx=x-1;
    newy=y;
    if(isSafe(m,n,visited,newx,newy)){
        output.push_back('U');
        solve(m,n,ans,output,visited,newx,newy);
        output.pop_back();
    }
    visited[x][y]=0;
}

vector<string> ratInAMaze(vector<vector<int>> &m, int n){
    vector<string> ans;
    if(m[0][0]==0){
        return ans;
    }
    string output="";
    vector<vector<int>> visited=m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    solve(m,n,ans,output,visited,0,0);
    sort(ans.begin(),ans.end());
    return ans;

}

int main(){
    vector<vector<int>> m={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    vector<string> ans=ratInAMaze(m,4);
    for(string s: ans){
        cout<<s<<endl;
    }    
    cout<<endl;


    return 0;
}