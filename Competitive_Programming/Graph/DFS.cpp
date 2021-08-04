// Depth First Search

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N = 1e5+2;
// Creating a visited array
bool vis[N];
// Creating a adjacency list
vector<int> adj[N];

void dfs(int node)
{
    
    // preorder
    vis[node] = 1;
    cout << node << " ";
    
    // inorder
    vector<int> :: iterator it;
    
    for(it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if(vis[*it]);
        else
        {
            dfs(*it);
        }
    }
}

int main()
{
    // Mark all the node as not visited
    for(int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    
    // Take input as number of nodes and edges
    cout << "Input number of nodes and edges :" << endl;
    int n, m;
    cin >> n >> m;
    
    // Take the connection from one node to another in case of undirected graph
    cout << "Input the edges from the nodes :" << endl;
    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    cout << "Depth First Search :" << endl;
    dfs(1);
   
    return 0;
}