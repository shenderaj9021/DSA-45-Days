/* 289. Game of Life
https://leetcode.com/problems/game-of-life/
*/
class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&board){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]==0){
            return 0;
        }
        if(board[i][j]==1){
            return 1;
        }
        return 0;
    }
    void gameOfLife(vector<vector<int>>& board) {
      
        vector<vector<int>>grid {board.size(),vector<int>(board[0].size())};
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int count = solve(i-1,j-1,board)+solve(i-1,j,board)+solve(i-1,j+1,board)+solve(i,j+1,board)+solve(i+1,j+1,board)+solve(i+1,j,board)+solve(i+1,j-1,board)+solve(i,j-1,board);
                
                if((board[i][j]==1 && count<2) || (board[i][j]==1 && count>3)){
                    grid[i][j] =0;
                }else if(board[i][j]==0 && count==3){
                    grid[i][j] =1;
                }else if(board[i][j]==1 && count>=2 && count<=3){
                    grid[i][j] =1;
                }else{
                    grid[i][j] = board[i][j];
                }
            }
          
        }
        board = grid;
    }
};