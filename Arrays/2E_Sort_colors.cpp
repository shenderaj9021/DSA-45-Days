// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
//with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

// This approach will do this task in O(n) time complexity
#include<iostream>
#include<bits//stdc++.h>
using namespace std;
 void swap(int&a,int &b){
        int temp =a;
        a =b;
        b=temp;
        }
void sortcolors(vector<int> &nums){
        int low =0;
        int high=nums.size()-1;
        int mid =0;
        while(mid<=high){
          
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }

}
int main(){
    vector<int> nums;
    nums ={2,0,2,1,1,0}   ;        //hard code array
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    sortcolors(nums);
      for(auto it:nums){
        cout<<it<<" ";
    }
   
    
}