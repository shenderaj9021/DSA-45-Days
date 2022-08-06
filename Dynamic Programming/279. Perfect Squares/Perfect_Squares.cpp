/* 279. Perfect Squares
https://leetcode.com/problems/perfect-squares/
*/

class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0] =0;
        dp[1] =1;
        for(int i=2;i<=n;i++){
            int m =INT_MAX;
            for(int j=1;j*j<=i;j++){
                m = min(dp[i-j*j],m);
            }
            dp[i] = m+1;
        }
        return dp[n];
        
    }
};