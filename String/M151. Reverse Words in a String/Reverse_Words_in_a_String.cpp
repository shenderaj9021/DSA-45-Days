/* 151. Reverse Words in a String
https://leetcode.com/problems/reverse-words-in-a-string/
*/
class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp ="";
        stack<string> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                st.push(temp);
                temp="";
            }else{
                temp+=s[i];
                    
            }
        }
        st.push(temp);
        while(!st.empty()){
         if(st.top()==""){
               st.pop();
             continue;
         }else{
             if(ans.length()==0){
                 ans+=st.top();
             }else{
                 ans+=" "+st.top();
             }
         }
        st.pop();
        }
        return ans;
    }
};