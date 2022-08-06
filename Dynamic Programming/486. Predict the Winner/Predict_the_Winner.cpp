/* 486. Predict the Winner

https://leetcode.com/problems/predict-the-winner/
*/
class Solution {
public:
long long dp [22][22][2];
    int recursion(int i,int j,vector<int> nums,int player){
        if(i>j){
            return 0;
        }
    if(dp[i][j][player]!=-1){
        return dp[i][j][player];
    }
        if(player==0){
          return dp[i][j][player]= max(nums[i]+recursion(i+1,j,nums,1),nums[j]+recursion(i,j-1,nums,1));
        }else{
           return dp[i][j][player]= min(recursion(i+1,j,nums,0),recursion(i,j-1,nums,0));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
       long long sum =0;
           memset(dp,-1,sizeof(dp));
        for(auto it:nums){
            sum+=it;
        }
        
        long long one=recursion(0,nums.size()-1,nums,0);
        sum = sum-one;
        return one>=sum;
        
    }
};