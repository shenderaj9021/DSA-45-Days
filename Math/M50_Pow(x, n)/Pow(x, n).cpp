/* 50. Pow(x, n)
https://leetcode.com/problems/powx-n

Two approches 
1] Brute force
2] Math 
*/


class Solution {
public:
    double myPow(double x, int n) {
        double ans =1.0;
        long num = n;
        if(num<0){
            num = num*-1;
        }
        while(num>0){
            if(num%2==1){
                ans*=x;
                num--;
            }else{
                x = x*x;
                num=num/2;
            }
        }
        if(n<0){
            return 1/ans;
        }else{
            return ans;
        }
    }
};
