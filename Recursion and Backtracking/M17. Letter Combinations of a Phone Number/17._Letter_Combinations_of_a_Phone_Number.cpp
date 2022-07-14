/* 17. Letter Combinations of a Phone Number
https://leetcode.com/problems/letter-combinations-of-a-phone-number/

*/
class Solution {
public:
   void solve(string s,vector<vector<char>> v,vector<string>& ans,int row){
    
        if(row==v.size()){
            ans.push_back(s);
            return;
        }
       
        for(auto it:v[row]){
            solve(s+it,v,ans,row+1);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
       vector<vector<char>> v;
            vector<string> ans;
        if(digits.size()==0){
            return ans;
        }

        for(int i=0;i<digits.length();i++){
            vector<char> g;
            int temp = digits[i]-'0';
            temp = temp-2;
            int j = 97+temp*3;
            int count =3;
            if( digits[i]=='7'){
                count++;
            }
            if(digits[i]>'7'){
                j++;
            }
            if(digits[i]=='9' ){
               
                count++;
            }
            while(count>0){
            
                g.push_back(char(j));
                count--;
                j++;
            }
            v.push_back(g);
        }
       
      
        string e="";
        solve(e,v,ans,0);
        sort(ans.begin(),ans.end());
       
        return ans;
        
    }
};
