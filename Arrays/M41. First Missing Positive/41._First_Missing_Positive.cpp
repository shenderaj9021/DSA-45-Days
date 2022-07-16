/*41. First Missing Positive
https://leetcode.com/problems/first-missing-positive/
*/

class Solution {
public:
    
    int firstMissingPositive(vector<int>& nums) {
       int flag =0;
        for(int  i=0;i<nums.size();i++){
            if(nums[i]==1){
                flag++;
            }else  if(nums[i]<=0 || nums[i]>nums.size()){
             
                    nums[i] =1;
                
            }
            
        }
        if(flag==0){
            return 1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]*=-1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
                break;
            }
        }
        return nums.size()+1;
    }
};