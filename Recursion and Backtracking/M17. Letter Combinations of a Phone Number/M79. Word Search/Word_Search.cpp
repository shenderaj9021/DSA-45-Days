/* 79. Word Search
https://leetcode.com/problems/word-search/
*/
class Solution {
public:
    bool solve(int ind,int i,int j,string& word,vector<vector<char>>&board){
        if(ind>=word.length()){
            return true;
        }
        if(i<0 ||j<0 || j>=board[0].size()||i>=board.size() || board[i][j]=='-'){
            return false;
        }
        if(word[ind]!=board[i][j]){
            return false;
        }
       char st=  board[i][j];
        board[i][j]='-';
  
        bool e = solve(ind+1,i+1,j,word,board);
        bool w = solve(ind+1,i-1,j,word,board);
        bool n = solve(ind+1,i,j+1,word,board);
        bool s = solve(ind+1,i,j-1,word,board);
        bool ans = e||w||n||s;
        board[i][j] =st;
        
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
              
                    bool t = solve(0,i,j,word,board);
                    if(t){
                        return t;
                    }
                
            }
        }
        return false;
    }
};
