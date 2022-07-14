/* 643. Maximum Average Subarray I
    https://leetcode.com/problems/maximum-average-subarray-i/
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        double avg =INT_MIN;
        int i=0;
        int j=0;

        while(j<k){
            sum+=double(nums[j]);
            j++;
        }
        j--;
         while(j<nums.size()){
            avg=max(avg,double(sum/k));
            sum-=double(nums[i]);
            i++;
            j++;
            if(j<nums.size()){
                  sum+=double(nums[j]);
            }
          
        }
       
        return avg;
    }
};