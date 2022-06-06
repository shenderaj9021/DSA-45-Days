/*
https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/#

You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.


In this problem we notice one thing that we find use of vector 
have better time complexity than using map to mark element visited

if we use map to mark element as true for visited code fails on
test case no 296 but use of vector it passed;



*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        
        vector<int>mp(n+1);
      
        for(int i=0;i<n;i++){
            if(arr[i]>0 && arr[i]<=n){
            mp[arr[i]]=true;
            }
        }
        for(int i=1;i<=n;i++){
         
            if(!mp[i]){
              
                return i;
            }
        }
        return n+1;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends


