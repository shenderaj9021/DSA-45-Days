/* 1334. Find the City With the Smallest Number of Neighbors at a Threshold Distance
https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/

*/

// we are going to use flyed wrshall here
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> g(n,vector<int>(n,INT_MAX));   // matrix for floyd warshall calculation 
        // Intialization for distance from self
        for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                   if(i==j){
                       g[i][j]=0;
                   }
               }
        }
        // insertion of given edges
        for(int i=0;i<edges.size();i++){
            g[edges[i][0]][edges[i][1]] = edges[i][2];
             g[edges[i][1]][edges[i][0]] = edges[i][2];
        }
            
       // Floyed warshall 
       for(int k=0;k<n;k++){
           for(int i=0;i<n;i++){
               for(int j=0;j<n;j++){
                   if(g[i][k]!=INT_MAX && g[k][j]!=INT_MAX && g[i][k]+g[k][j]<g[i][j])
                   g[i][j]=g[i][k]+g[k][j];
               }
           }
       }
        
        // finding vertext now
        int vertex =0;
        int m=INT_MAX;
       
        for(int i=0;i<n;i++){
            int temp =0;
            for(int j=0;j<n;j++){
                if(i!=j && g[i][j]<=distanceThreshold){
                    temp++;
                }
            }
            cout<<temp<<endl;
            if(m>=temp){
                m = temp;
                vertex = i;
            }
        }
      
    
        return vertex;
    }
};
