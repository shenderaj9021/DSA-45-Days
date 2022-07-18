/* 1499. Max Value of Equation
https://leetcode.com/problems/max-value-of-equation/

*/
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        int ans =INT_MIN;
        priority_queue<pair<int,int>> dq;
        int m = points.size();
        int n= points[0].size();
        for(int i=0;i<m;i++){
            while(!dq.empty() && abs(dq.top().second-points[i][0])>k ){
                dq.pop();
            }
            if(!dq.empty()){
                ans = max(ans,points[i][0]+points[i][1]+dq.top().first);
            }
            dq.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;    
    }
};
