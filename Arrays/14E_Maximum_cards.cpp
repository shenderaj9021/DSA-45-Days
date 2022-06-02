/*
There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
Your score is the sum of the points of the cards you have taken.
Given the integer array cardPoints and the integer k, return the maximum score you can obtain.
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/


*/
 
#include<iostream>
#include<bits//stdc++.h>
using namespace std;


int maxScore(vector<int>& cardPoints, int k) {
    int sum =0;
    int n= cardPoints.size();
    int ans=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
     ans =sum;
        int i =k-1;
        int j =n-1;
    while(i>=0 && j>=n-k){
        sum -=cardPoints[i];
        sum+=cardPoints[j];
        i--;
        j--;
        ans=max(sum,ans);
    }
        return ans;
}

int main(){
    vector<int> arr;
    arr ={1,2,3,4,5,6,1}   ;        //hard code array
    for(auto it:arr){
        cout<<it<<" ";
    }
    int k=3;
    int ans = maxScore(arr,k);
    cout<<ans<<endl;
     
  

}