/* 442. Find All Duplicates in an Array4
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice,
 return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.

Approach -1 This can be easily done using map or set but it will increase our space complextity

Approach -2 we will follow second approach that we already follow in 3E. All element are in range 1 to n so will marks nums[abs(nums[i])-1] 
as negative if it is already negative means it is visited by another element already mean index of this element is use two time 

*/
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
      
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            
            if(nums[abs(nums[i])-1]<0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[abs(nums[i])-1]*=(-1);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i] = nums[i]*(-1);
            }
            
        }
        return ans;
}
vector<int> findDuplicatesmap(vector<int>& nums) {
        set<int> st;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])!=st.end()){
                ans.push_back(nums[i]);
            }else{
                st.insert(nums[i]);
            }
        }
        return ans;
    }
int main(){
    vector<int> arr;
    arr ={4,3,2,7,8,2,3,1}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> ans;
    ans = findDuplicates(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    ans = findDuplicatesmap(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    
  

}