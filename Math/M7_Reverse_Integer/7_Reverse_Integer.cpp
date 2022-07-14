/*      7. Reverse Integer
    https://leetcode.com/problems/reverse-integer/
*/ 
class Solution {
public:
    int reverse(int x) {
        long long temp =0;
        bool flag = false;
        if(x<0){
            flag= true;
            if(x==INT_MIN){
                return 0;
            }
            x= x*(-1);
        }
        while(x>0){
            temp = temp*10+x%10;
            if(temp>INT_MAX){
                return 0;
            }
            x=x/10;
          
        }
        if(flag){
            temp = temp*(-1);
        }
        return temp;
    }
};
