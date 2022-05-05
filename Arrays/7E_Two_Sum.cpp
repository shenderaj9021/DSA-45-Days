/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){

                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]+nums[i]==target){
                        v.push_back(i);
                        v.push_back(j);
                    }
                }
            
        }
        return v;
}

int main(){
    vector<int> nums;
    nums ={2,7,11,15}   ;        //hard code array
    int target=9;
    
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> ans =twoSum(nums,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
}
