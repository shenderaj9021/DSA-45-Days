/*https://www.geeksforgeeks.org/chocolate-distribution-problem/
Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates.
 There are m students, the task is to distribute chocolate packets such that: 
Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.
*/
#include<iostream>
#include<bits//stdc++.h>
using namespace std;

int min_choco(vector<int> arr,int n,int m){
    if(m==0 || n==0){
        return 0;
    }
    sort(arr.begin(),arr.end());
    if(n<m){
        return -1;
    }
    int dif = INT_MAX;
    for(int i=0;i<n-m+1;i++){
        dif =min(arr[i + m - 1] - arr[i],dif);
    }
    return dif;
    
}
int main(){
    vector<int> nums;
    nums ={3, 4, 1, 9 , 56, 7, 9, 12}   ;        //hard code array
    int m =5;
    int n = nums.size();
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    int ans = min_choco(nums,n,m);
     cout<<ans<<endl;
}
