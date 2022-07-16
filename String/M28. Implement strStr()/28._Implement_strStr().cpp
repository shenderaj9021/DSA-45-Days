/* 28. Implement strStr()
https://leetcode.com/problems/implement-strstr/

*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag = false;
        int ind =0;
        for(int i=0;i<haystack.size();i++){
            int j=i;
            int k=0;
            while(j<haystack.size()&& haystack[j]==needle[k]){
                j++;
                k++;
            }
            if(j-i==needle.length()){
                flag = true;
                ind = i;
                break;
            }
            
        }
        if(flag){
            return ind;
        }else{
            return -1;
        }
    }
};