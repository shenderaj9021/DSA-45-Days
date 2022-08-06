/* 204. Count Primes
https://leetcode.com/problems/count-primes/

*/
class Solution {
public:
    const int m = 5000001;
    bool arr[5000001];
   
    int countPrimes(int n) {
        for(int i=0;i<n;i++){
            arr[i] = false;
        }
        for(int i=2;i*i<n;i++){
            if(arr[i]==false){
                for(int j=i*2;j<n;j+=i){
                    arr[j] = true;
                }
            }
        }
        int count =0;
        for(int i=2;i<n;i++){
            if(!arr[i]){
                count++;
            }
        }
        return count;
    }
};