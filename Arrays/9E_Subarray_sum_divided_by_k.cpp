/* Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.
A subarray is a contiguous part of an array.

/https://leetcode.com/problems/subarray-sums-divisible-by-k/
same as subarray sum only point to notice is whene we get negative index we not use postive of same number instead we add k
this shows that before the k indices of negative number we getting same reminder. so sum of elements between in two elements will equal be 
divisible by k
*/
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
     int total=0;
        map<int,int> mp;
        mp[0]=1;
        int currsum =0;
        
        for(int i=0;i<nums.size();i++){
              
          
            currsum+=nums[i];
            
            int rem = currsum%k;
            if(rem<0){
                rem =rem+k;
            }
            
           if(mp.find(rem)!=mp.end()){
               total+=mp[rem];
           }
            mp[rem]++;
        }
       
        return total;
      
}
int main(){
    vector<int> arr;
    arr ={4,5,0,-2,-3,1}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int pro =0;
    pro = subarraySum(arr,5);
    
    cout<<pro<<endl;

}