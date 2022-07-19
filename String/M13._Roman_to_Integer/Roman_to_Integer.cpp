/* 13. Roman to Integer
https://leetcode.com/problems/roman-to-integer/

*/
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp['I'] = 1;
        mp['V']=5;
        mp['X'] =10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int sum =0;
        int prev =0;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]>prev){
                sum = sum-(2*prev);
            }
            sum+=mp[s[i]];
            prev = mp[s[i]];
        }
        return sum;
    }
};