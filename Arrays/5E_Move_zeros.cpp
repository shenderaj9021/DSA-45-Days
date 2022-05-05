// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
// Approach -  approach is basically to use pointer method we will set start pointer to start of array and mov start till we get nums[start]=0
//if start is reached to end means there is no zero in array so return
// else start interating from start nums[i]!=zero then replace nums[start]=nums[i] as nums[start] is zero and increament start
// do iteration until i is less than nums size() && start is less than nums sizwe;
void moveZeroes(vector<int>& nums) {
        int start =0;
        while(nums[start]!=0 && start<nums.size()-1){
            start++;
        }
        if(start>=nums.size()-1){
            return ;
        }
        for(int i=start;i<nums.size();i++){
            if(start>=nums.size()){
                return;
            }
            
            if(nums[i]!=0){
                nums[start] =nums[i];
                nums[i]=0;
                start++;
            }
        }
        
}
int main(){
    vector<int> nums;
    nums ={0,1,0,3,12}   ;        //hard code array
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    moveZeroes(nums);
      for(auto it:nums){
        cout<<it<<" ";
    }
  
   
    
}