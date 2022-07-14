/* 2269. Find the K-Beauty of a Number
https://leetcode.com/problems/find-the-k-beauty-of-a-number/
*/
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        vector<int> l;
        int temp = num;
        if(k==0){
            return 0;
        }
        while(temp>0){
            l.push_back(temp%10);
            temp= temp/10;
        }
        reverse(l.begin(),l.end());
        
        int i=0;
        int j =0;
        int m=0;
        int ans =0;
        while(j<k){
            m=m*10 + l[j];
            j++;
        }
       j--;
        while(j<l.size()){
           
            if(m!=0 && num%m==0){
                ans++;
            }

            m = m-(l[i]*pow(10,k-1));
            
            i++;
            j++;
            if(j<l.size()){
                  m=m*10 + l[j];
            }
          
        }
        return ans;
        
    }
};