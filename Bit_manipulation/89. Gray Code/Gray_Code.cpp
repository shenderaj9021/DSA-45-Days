/* 89. Gray Code
https://leetcode.com/problems/gray-code/

*/

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> v ={0,1};
        if(n==1){
            return v;
            
        }
        for(int i=1;i<n;i++){
           
            int k = v.size();
            vector<int> ans;
            ans = v;
            for(int j=k-1;j>=0;j--){
                ans.push_back(v[j]+pow(2,i));
            }
            v = ans;
        }
        return v;
    }
};