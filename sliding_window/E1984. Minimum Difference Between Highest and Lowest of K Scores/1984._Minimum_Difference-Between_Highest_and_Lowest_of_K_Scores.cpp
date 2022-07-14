/* 1984. Minimum Difference Between Highest and Lowest of K Scores
https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
*/
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
        int m = INT_MAX;
        for(int i=0;i+k-1<nums.size();i++){
            m = min(m,abs(nums[i+k-1]-nums[i]));
            
        }
        
        return m;
    }
};