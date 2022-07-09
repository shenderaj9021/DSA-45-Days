/*https://leetcode.com/problems/pascals-triangle


class Solution {
public:
    void solve(vector<vector<int>> &ans,vector<int>& temp,int numRows){
      
        if(temp.size()==numRows){
            return ;
        }
        vector<int> newtemp;
        newtemp.push_back(1);
        for(int i=1;i<temp.size();i++){
            newtemp.push_back(temp[i]+temp[i-1]);
        }
        newtemp.push_back(1);
        ans.push_back(newtemp);
        solve(ans,newtemp,numRows);
        return;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        solve(ans,temp,numRows);
        return ans;
    }
};


*/