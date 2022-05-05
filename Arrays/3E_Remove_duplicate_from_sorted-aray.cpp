// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
 The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages,
 you must instead have the result be placed in the first part of the array nums. More formally, 
 if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
 It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory. */

//Here i am using two pointer approach one is use from prev and on in start
// we will iterate through array and if current is not equal to prev increment start and replace nums[start] with current
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
 int removeDuplicates(vector<int>& nums) {
        int start =0;
        int prev  =nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=prev){
                nums[++start] = nums[i];
                prev = nums[i];
            }
        }
        return ++start;
}
int main(){
    vector<int> nums;
    nums ={0,0,1,1,1,2,2,3,3,4}   ;        //hard code array
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    int k = removeDuplicates(nums);
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
   
    
}