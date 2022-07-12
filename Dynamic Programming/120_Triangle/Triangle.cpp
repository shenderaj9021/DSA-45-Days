/* https://leetcode.com/problems/triangle/ */

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
           int n = triangle.size();
       int dp[n+1][n+1];
       for(int i=0;i<n+1;i++){
           for(int j=0;j<n+1;j++){
               dp[i][j] = INT_MAX;
           }
       }
       dp[0][0] =0;
       for(int i=1;i<n+1;i++){
           for(int j =0;j<=i-1;j++){
               int p = INT_MAX;
               int q = INT_MAX;
               if(j-1>=0){
                   p = dp[i-1][j-1];
               }
               q =dp[i-1][j];
               dp[i][j] = triangle[i-1][j]+min(p,q);
           }
       }
       int ans = INT_MAX;
       for(int i=0;i<n;i++){
           ans = min(dp[n][i],ans);
       }
       return ans;
    }
};