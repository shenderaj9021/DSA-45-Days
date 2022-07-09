class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for(int k=0;k<nums.size()-1;k++){
           
            for(int i=0;i<nums.size()-1-k;i++){
                nums[i] =(nums[i] +nums[i+1])%10;
            }
        }
        return nums[0];
    }
};
