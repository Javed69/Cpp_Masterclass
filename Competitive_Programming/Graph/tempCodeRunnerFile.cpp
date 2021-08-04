// Breadth First Search

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N = 1e5+2;
// Creating a visited array
bool vis[N];
// Creating adjacency list
vector<int> adj[N];

int main()
{
    // Marking elements as not visited
    for(int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    
    // Taking number of nodes and edges
    cout << "Input number of nodes and edges :" << endl;
    int n, m;
    cin >> n >> m;
    
    // Taking the links between nodes
    cout << "Input the edges from the nodes : " << endl;
    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    // Creating a queue
    queue<int> q;
    q.push(1);
    vis[1] = true;
    
    cout << "Breath First Search :" << endl;
    while(!q.empty())
    {
        // Getting the first element from the queue
        int node = q.front();
        
        q.pop();
        
        cout << node << " ";
        
        vector<int> :: iterator it;
        // Iterating to its edges
        for(it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if(!vis[*it])
            {
                vis[*it] =  1;
                q.push(*it);
            }
        }
    }
    return 0;
}