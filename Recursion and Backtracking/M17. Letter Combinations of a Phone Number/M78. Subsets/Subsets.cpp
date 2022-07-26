/* 78. Subsets
https://leetcode.com/problems/subsets/
*/
class Solution {
public:
void recursion(set<vector<int>>& st,vector<int>v,int n,vector<int> nums){
        if(n==nums.size()){
            return ;
        }
        v.push_back(nums[n]);
        st.insert(v);
        recursion(st,v,n+1,nums);
        v.pop_back();
        st.insert(v);
        recursion(st,v,n+1,nums);
        
        return;
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        set<vector<int>> st;
        recursion(st,v,0,nums);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
