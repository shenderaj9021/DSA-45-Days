/* 14. Longest Common Prefix

https://leetcode.com/problems/longest-common-prefix/
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ind =strs[0].size();
        string str = strs[0];
        for(int i=1;i<strs.size();i++){
            string temp = strs[i];
            int k =0;
            while(k<strs[i].size() && k<strs[i-1].size() && strs[i][k]==strs[i-1][k]){
                k++;
            }
            k--;
            ind =min(ind,k);
        }
        if(ind==-1){
            return "";
        }else{
            return strs[0].substr(0,ind+1);
        }
    }
};