vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        queue<int> q;
        vector<bool> visited(V,false);
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int n = q.front();
            ans.push_back(n);
            q.pop();
            for(auto it:adj[n]){
                if(!visited[it]){
                    visited[it] =true;
                    q.push(it);
                }
            }
        }
        return ans;
    }