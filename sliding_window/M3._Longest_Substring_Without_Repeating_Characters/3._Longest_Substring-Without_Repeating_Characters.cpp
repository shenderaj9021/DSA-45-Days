/* 3. Longest Substring Without Repeating Characters
https://leetcode.com/problems/longest-substring-without-repeating-characters/

*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int i=0;
        int j=0;
        int m=0;
        st.insert(s[j]);
        while(j<s.length()){
            m  = max(m,j-i+1);
            j++;
            if(st.find(s[j])!=st.end()){
                while(!st.empty() && s[i]!=s[j]){   
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
        }
        return m;
    }
};