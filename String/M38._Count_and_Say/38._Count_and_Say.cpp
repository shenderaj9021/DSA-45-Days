/* 38. Count and Say
https://leetcode.com/problems/count-and-say/
*/
class Solution {
public:
   
    string countAndSay(int n) {
        deque<int>q;
        string s="1";
        if(n==1){
            return s;
        }
        while(n>1){
            string g ="";
        for(int i=0;i<s.length();i++){
            int count =1;
            while(i<s.length()-1 && s[i]==s[i+1]){
                count++;
                i++;
            }
            g+=(char)(count+'0');
            g+=s[i];
        }
            n--;
            s = g;
        }
       
        return s;
        
        
    }
};