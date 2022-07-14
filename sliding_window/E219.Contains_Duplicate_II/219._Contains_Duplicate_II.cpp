/* https://leetcode.com/problems/contains-duplicate-ii/ */


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                if(abs(mp[nums[i]]-i)<=k){
                    flag =true;
                    break;
                }else{
                    mp[nums[i]] =i;
                }
            }else{
                mp.insert({nums[i],i});
            }
           
        }
        return flag;
    }
};