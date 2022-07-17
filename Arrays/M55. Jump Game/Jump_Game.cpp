/* 55. Jump Game
https://leetcode.com/problems/jump-game/

*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int ind =0;
    int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>ind){
                return false;
            }
            ind =max(ind,i+nums[i]);
            if(i>=(n-1)){
                return true;
            }
        }
        return true;
    }
};