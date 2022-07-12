/* https://leetcode.com/problems/unique-paths-ii/ */

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int t[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                t[i][j] =0;
                if(i==0){
                    t[i][j] =1;
                    if(j>0 && (obstacleGrid[i][j-1]==1 ||t[i][j-1]==0)  ){
                        t[i][j] =0;
                    }
                }
                if(j==0 ){
                    t[i][j] =1;
                     if(i>0 && (obstacleGrid[i-1][j]==1 || t[i-1][j]==0)){
                        t[i][j] =0;
                    }
                }
                if(obstacleGrid[i][j]==1){
                    t[i][j] =0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                t[i][j] = t[i-1][j] +t[i][j-1];
                if(obstacleGrid[i][j]==1){
                    t[i][j]=0;
                }
            }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<t[m-1][n-1]<<endl;
        return t[m-1][n-1];
        
    }
};