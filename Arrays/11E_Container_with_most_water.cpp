/* 11. Container With Most Water
https://leetcode.com/problems/container-with-most-water/

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.

Approach 1 (Got tle here) -  This was bruteforce approach in which we try every possible combination using two for loop and find maximum area
                            But time compexity is O(n);
Approcah 2 - (Two pinter method) - Here we will we use left and right pointer and calculate are who havin less height bring him more close and break
        loop where l>r;

*/



#include<iostream>
#include<bits//stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int l=0;
        int r = height.size()-1;
        int ma=0;
        while(l<=r){
           int temp =(r-l)*min(height[l],height[r]);
            ma = max(ma,temp);
            
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ma;
}
int maxarea(vector<int>& height){
        int ma=0;
        for(int i=0;i<height.size();i++){
            for(int j=i;j<height.size();j++){
                int temp = (j-i)*min(height[i],height[j]);
                ma = max(temp,ma);
            }
        }
        return ma;
}

int main(){
    vector<int> arr;
    arr ={1,8,6,2,5,4,8,3,7}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
  int ans;
    ans = maxArea(arr);
   cout<<ans<<endl;
    ans = maxarea(arr);
    cout<<ans<<endl;
    
  

}