/* 1876. Substrings of Size Three with Distinct Characters
https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        map<char,int> mp;
        int j=0;
        int i =0;
        int ans =0;
        while(j<3){
            if(mp.find(s[j])==mp.end()){
                mp.insert({s[j],1});
            }else{
                mp[s[j]]++;
            }
            j++;
            
        }
        j--;
       
        while(j<s.length()){
          
            if(mp.size()==3){
                ans++;
            }
            if(mp[s[i]]==1){
                mp.erase(s[i]);
            }else{
                mp[s[i]]--;
            }
            i++;
            j++;
            if(j<s.length()){
                if(mp.find(s[j])==mp.end()){
                    mp.insert({s[j],1});
                }else{
                    mp[s[j]]++;
                }
            }
        }
        return ans;
    }
};