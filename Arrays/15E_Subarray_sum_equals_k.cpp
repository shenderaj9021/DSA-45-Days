/*https://leetcode.com/problems/subarray-sum-equals-k/
 Given an array of integers nums and an integer k, 
return the total number of subarrays whose sum equals to k.

*/



#include<iostream>
#include<bits//stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
       int ans =0;
        map<int,int> mp;
        int currsum=0;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
             if(mp.find(currsum-k)!=mp.end()){
                ans+=mp[currsum-k];
            }
            mp[currsum]++;
           
        }
        return ans;
}
int main(){
    vector<int> arr;
    arr ={1,2,3}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    int pro =0;
    pro = subarraySum(arr,3);
    
    cout<<pro<<endl;

}