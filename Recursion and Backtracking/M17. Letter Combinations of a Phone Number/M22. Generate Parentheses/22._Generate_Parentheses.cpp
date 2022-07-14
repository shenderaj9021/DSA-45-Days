/* https://leetcode.com/problems/generate-parentheses/

*/

class Solution {
public:
    void solve(int open,int close,vector<string>&ans,string s){
        if(open>close){
            return ;   
        }
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open<0 || close<0){
            return ;
        }
        solve(open-1,close,ans,s+"(");
        solve(open,close-1,ans,s+")");
              return;
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> ans;
        solve(open,close,ans,"");
        return ans;
    }
    
};