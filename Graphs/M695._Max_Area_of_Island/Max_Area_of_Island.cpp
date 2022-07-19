/* 695. Max Area of Island
https://leetcode.com/problems/max-area-of-island/
*/
class Solution {
public:
    void solve(int i,int j,vector<vector<int>>&grid,int& area){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return ;
        }
        if(grid[i][j]==1){
            area++; 
            grid[i][j] =0;
        }else{
            return;
        }
       solve(i-1,j,grid,area);
        solve(i,j+1,grid,area);
        solve(i,j-1,grid,area);
        solve(i+1,j,grid,area);
        return ;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m =INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int area =0;
                if(grid[i][j]==1){
                    solve(i,j,grid,area);
                }
                m = max(m,area);
            }
        }
        return m;
    }
};