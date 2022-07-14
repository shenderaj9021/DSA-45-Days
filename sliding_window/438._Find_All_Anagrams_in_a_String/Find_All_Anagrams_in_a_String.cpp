/* https://leetcode.com/problems/find-all-anagrams-in-a-string/ */

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k =p.length();
        map<char,int> mp;
        int j=0;
        while(j<p.length()){
            if(mp.find(p[j])==mp.end()){
                mp.insert({p[j],1});
            }else{
                mp[p[j]]++;
            }
            j++;
        }
        j=0;
        int i=0;
        vector<int> ans;
        int count  =mp.size();
        while(j<p.size()){
           if(mp.find(s[j])!=mp.end()){
             
               mp[s[j]]--;
                 if(mp[s[j]]==0){
                count--;
            }
           }
          
            if(count==0){
                ans.push_back(i);
            }
            j++;
        }
        j--;
        while(j<s.length()){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                 if(mp[s[i]]==1){
                count++;
            }
            }
            i++;
            j++;
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            if(count==0){
                ans.push_back(i);
            }
        
        }
        return ans;
    }
};