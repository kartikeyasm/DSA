#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;

template <typename T>

class Graph{
    public:
        unordered_map<T,vector<T>> G;

        void AddEdge(T n, T m){
            G[n].push_back(m);
            G[m].push_back(n);
        }

        void printGraph(){
            for(auto i:G){
                cout<<i.first<<" => { ";
                for(T j:i.second){
                    cout<<j<<" , ";
                }
                cout<<" }"<<endl;
            }
        }

/*
//BFS Traversal of an undirected and disconected graph      Adjacency List      O(V+E)   O(V+E)
                                                            Adjacency Matrix    O(V^2)   O(V^2)   

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    vector<bool> visited(n,false);
    queue<int> q;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            //BFS(i)
            q.push(i);
            visited[i] = true;

            while(!q.empty()){
                int temp = q.front();
                q.pop();
                ans.push_back(temp);
                
                for(int j=0; j<adj[temp].size(); j++){
                  if (!visited[adj[temp][j]]) {
                    q.push(adj[temp][j]);
                    visited[adj[temp][j]] = true;
                  }
                }
            }
        }
    }
    return ans;
}


*/
        vector<T> BFS(T start){
            unordered_map<T,bool> visited;
            queue<T> q;
            q.push(start);
            visited[start] = 1;
            vector<T> ans;
            while(!q.empty()){
                T temp = q.front();
                q.pop();
                ans.push_back(temp);
                for(T i:G[temp]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i]=true;
                    }
                }
            }
            return ans;
        }


        bool cycleDetection(){
            queue<T> q;
            unordered_map<T,bool> visited;
            unordered_map<T,T> parent;

            for(auto i:G){
                if(!visited[i.first]){
                    T node = i.first;
                    parent[node] = 0;
                    q.push(node);
                    visited[node] = true;
                    while(!q.empty()){
                        T temp = q.front();
                        q.pop();
                        for(T j: G[temp]){
                            if(visited[j] && parent[temp]!=j){
                                return true;
                            }
                            if(!visited[j]){
                                parent[j] = temp;
                                visited[j] = true;
                                q.push(j);
                            }
                        }
                    }
                }
            }
            return false;
        }

        bool cycleDetectionDFS(){
            stack<T> stk;
            unordered_map<T,bool> visited;
            unordered_map<T,T> parent;
            for(auto i:G){
                T node = i.first;
                if(!visited[node]){
                    stk.push(node);
                    visited[node] = true;
                    parent[node] = 0;
                    while(!stk.empty()){
                        T temp = stk.top();
                        stk.pop();
                        for(auto j:G[temp]){
                            if(visited[j] && parent[temp]!=j){
                                return true;
                            }
                            if(!visited[j]){
                                parent[j] = temp;
                                visited[j] = true;
                                stk.push(j);
                            }
                        }
                    } 
                }
            }
            return false;
        }

        
};



/*Cycle Detection in Directed Graph using DFS*/
bool hasCycle(vector<vector<int>> &G, int node, vector<bool> &visited, vector<bool> &visitedDFS){
    visited[node] = true;
    visitedDFS[node] = true;
    for(auto i: G[node]){
        if(!visited[i]){
            if(hasCycle(G, i, visited, visitedDFS)){
                return true;
            }
        }
        else{
            if(visitedDFS[i]){
                return true;
            }
        }
    }
    visitedDFS[node] = false;
    return false;
}

/*Cycle detection using topological sort (Kahn's Algo)(BFS)*/
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  unordered_map<int, vector<int>> adjList;
  int e = edges.size();
  vector<int> inDegree(n);
  for(int i=0; i<e; i++){
    int u = edges[i].first-1;
    int v = edges[i].second-1;
    adjList[u].push_back(v);
    inDegree[v]++;
  }
  queue<int> q;
  for(int i=0; i<n;i++){
    if(inDegree[i]==0){
      q.push(i);
    }
  }

  int count = 0;
  while(!q.empty()){
    int temp = q.front();
    q.pop();
    count++;
    for(int node: adjList[temp]){
      inDegree[node]--;
      if(inDegree[node]<=0){
        q.push(node);
      }
    }
  }
  return !(count==n);

}




/*Topological Sort using DFS*/
void topo(vector<vector<int>> &G, int node, stack<int> &stk, vector<bool> &visited){
    visited[node] = true;
    for(int i: G[node]){
        if(!visited[i]){
            topo(G, i, stk, visited);
        }
    }
    stk.push(node);
}

/*Topological sort using Kahn Algo (BFS) [inDegree]*/
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    unordered_map<int,vector<int>> adjList;
    vector<int> inDegree(v);
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].push_back(v);
        inDegree[v]++;
    }

    queue<int> q;
    for(int i=0; i<v; i++){
        if(inDegree[i]==0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push_back(temp);
        for(int node : adjList[temp]){
            inDegree[node]--;
            if(inDegree[node]<=0){
                q.push(node);
            }
        }
    }
    return ans;
}



//Adjacency List    O(V+E)  O(V)
//Adjacency Matrix  O(V^2)  O(V^2)

vector<int> DFS(vector<vector<int>> adjList, int n){
    vector<int> ans;
    vector<bool> visited(n,false);
    for(int i=0; i<n; i++){
        if(!visited[i]){
            //DFS(i);
            stack<int> stk;
            stk.push(i);
            visited[i] = true;
            while(!stk.empty()){
                int temp = stk.top();
                stk.pop();
                ans.push_back(temp);
                for(int j:adjList[temp]){
                    if(!visited[j]){
                        stk.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
    }
    return ans;
}


/* Recursive Method  


void DFS(vector<vector<int>> &adjList, int node, vector<bool> &visited, vector<int> &temp){
    temp.push_back(node);
    for(int i:adjList[node]){
        if(!visited[i]){
            visited[i] = true;
            DFS(adjList, i, visited, temp);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<int>> adjList = adjListMaker(edges, V);
    vector<vector<int>> ans;
    vector<bool> visited(V,false);
    for(int i=0; i<V; i++){
        vector<int> temp;
        if(!visited[i]){
            visited[i] = true;
            DFS(adjList, i, visited,temp);
            ans.push_back(temp);
        }
    }
    return ans;
}
*/


/*Shortest Path in an unweighted and undirected graph */
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// Write your code here
	unordered_map<int, vector<int>>  adjList;
	for(int i=0; i<m; i++){
		int u = edges[i].first;
		int v = edges[i].second;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	vector<int> parent(n+1, -1);
	vector<int> visited(n+1, false);
	queue<int> q;
	q.push(s);
	visited[s] = true;
	while(!q.empty()){
		int temp = q.front();
		q.pop();
		for(int node: adjList[temp]){
			if(!visited[node]){
				q.push(node);
				visited[node] = true;
				parent[node] = temp;
			}
		}
	}
	vector<int> ans;
	int temp = t;
	while(1){
		ans.push_back(temp);
		temp = parent[temp];
		if(temp==s){
			ans.push_back(s);
			break;
		}
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

void topoSort(vector<vector<pair<int,int>>> &G, vector<int> &visited, stack<int> &stk, int node){
    visited[node] = true;
    for(auto i: G[node]){
        if(!visited[i.first]){
            topoSort(G, visited, stk, i.first);
        }
    }
    stk.push(node);
}

/*Shortest Dist in a DAG*/ //O(V+E)
vector<int> shortestDist(vector<vector<pair<int,int>>> G, int S){
    //Topo Sort to get the order in the stack
    vector<int> visited(G.size(), false);
    stack<int> stk;
    topoSort(G, visited, stk, S);
    

    //Initalize dist vector with dist equal to Infinite and src node dist equal to 0;
    vector<int> dist(G.size(), INT_MAX);
    dist[S] = 0 ;
    while(!stk.empty()){
        int temp = stk.top();
        stk.pop();
        if(dist[temp]!=INT_MAX){
            int tempDist = dist[temp];
            for(auto i: G[temp]){
                dist[i.first] = min(dist[i.first] , tempDist+i.second);
            }
        }
    }
    return dist;
}





int main(){
    Graph<int> g;
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.AddEdge(4,2);
    g.AddEdge(4,5);
    g.AddEdge(1,5);
    g.printGraph();
    
    vector<int> ans = g.BFS(1);
    for(int i:ans){
        cout<<i<<" , ";
    }
    cout<<endl;

    return 0;
}

/*  Print Adjacency List of a undirected Graph 

//https://www.naukri.com/code360/problems/create-a-graph-and-print-it_1214551?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<int> ans[n];
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++){
        adj[i].push_back(i);
        for(int j=0; j<ans[i].size(); j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}
*/

