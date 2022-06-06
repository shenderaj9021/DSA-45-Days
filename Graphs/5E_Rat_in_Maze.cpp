/* https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
solved using simple recursive approch 
*/


// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void helper(vector<vector<int>> &m,int n,int i,int j,string s,vector<string> &ans,vector<vector<int>>& visited){
        if(i==n-1 && j ==n-1){
            ans.push_back(s);
            return ;
        }
        if(i+1<n && visited[i+1][j]==0 && m[i+1][j]==1){
            visited[i][j] = 1;
            helper(m,n,i+1,j,s+"D",ans,visited);
            visited[i][j]=0;
        }
        if(i-1>=0 && visited[i-1][j]==0 && m[i-1][j]==1){
            visited[i][j]=1;
            helper(m,n,i-1,j,s+"U",ans,visited);
            visited[i][j]=0;
        }
        if(j+1<n && visited[i][j+1]==0 && m[i][j+1]==1){
            visited[i][j] =1;
            helper(m,n,i,j+1,s+"R",ans,visited);
            visited[i][j] =0;
        }
        if(j-1>=0 && visited[i][j-1]==0 && m[i][j-1]==1){
            visited[i][j] =1;
            helper(m,n,i,j-1,s+"L",ans,visited);
            visited[i][j] =0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> visited(n,vector<int> (n,0));
        int i=0;
        int j =0;
        string s ="";
        if(m[i][j]==1){
        helper(m,n,i,j,s,ans,visited);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends