/* https://leetcode.com/problems/n-th-tribonacci-number/ *

class Solution {
public:
    int tribonacci(int n) {
        int tz= 0;
            int to =1;
        int tt = 1;
        if(n==0){
            return tz;
            
        }
        if(n==1){
            return to;
        }
        if(n==2){
            return tt;
        }
        int temp=0;
        for(int i=3;i<=n;i++){
            temp = tz+to+tt;
            tz = to;
            to = tt;
            tt = temp;
        }
        return temp;
    }
};