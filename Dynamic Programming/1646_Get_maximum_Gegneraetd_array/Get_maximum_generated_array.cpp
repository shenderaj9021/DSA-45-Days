/* https://leetcode.com/problems/get-maximum-in-generated-array */

class Solution {
public:
    int getMaximumGenerated(int n) {
        int t[n+1];
        for(int i=0;i<n+1;i++){
            t[i] =0;
        }
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        t[0] =0;
        t[1] =1;
        int mn =1;
        for(int i=2;i<n+1;i++){
            if(i%2==0){
                t[i] = t[i/2];
            }else{
                t[i] = t[(i-1)/2]+t[((i-1)/2)+1];
            }
            mn = max(mn,t[i]);
        }
        return mn;
    }
};