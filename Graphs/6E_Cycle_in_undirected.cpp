/* problem link - https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1# */


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
        for(int i=0;i<V;i++){
            visited[i] =false;
        }
        for(int i=0;i<V;i++){
            
            if(!visited[i]){
             
                queue<pair<int,int>> q;
                q.push({i,-1});
               
                visited[i] =true;
                while(!q.empty()){
                    int node = q.front().first;
                    int prev = q.front().second;
                  q.pop();
                    for(auto it:adj[node]){
                        if(!visited[it]){
                            q.push({it,node});
                            visited[it]=true;
                        }else if(it!=prev){
                            return true;
                        }
                        
                    }
                }
            }
        }
        return false;
        
  
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends