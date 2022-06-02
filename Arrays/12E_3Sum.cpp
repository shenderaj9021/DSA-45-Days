/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, 
and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

https://www.code-recipe.com/post/three-sum   - Best solution refer this 
*/

#include<iostream>
#include<bits//stdc++.h>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int first=0;first+2<nums.size();first++){
            if(first>0 && nums[first]==nums[first-1]){
                continue;
            }
            int second =first+1;
            int third = nums.size()-1;
            while(second<third){
                int sum = nums[first]+nums[second]+nums[third];
                if(sum==0){
                    vector<int> sub;
                    sub.push_back(nums[first]);
                    sub.push_back(nums[second]);
                    sub.push_back(nums[third]);
                    ans.push_back(sub);
                    third--;
                    while(second<third && nums[third]==nums[third+1]){
                        third--;
                        
                    }
                }else if(sum>0){
                    third--;
                }else{
                    second++;
                }
                
            }
        }
        return ans;
    }

int main(){
    vector<int> arr;
    arr ={-1,0,1,2,-1,-4}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
   vector<vector<int>> ans;
   cout<<endl;
   ans = threeSum(arr);
   for( auto it:ans){
       for(auto jt:it){
           cout<<jt<<" ";
       }
       cout<<endl;
   }
     
  

}