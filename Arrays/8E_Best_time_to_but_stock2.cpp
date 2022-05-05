/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
#include<iostream>
#include<bits//stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
        int pr=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                pr+=prices[i]-prices[i-1];
            }   
         
         
        
        }
        return pr;
}
int main(){
    vector<int> prices;
    prices ={7,1,5,3,6,4}   ;        //hard code array
    for(auto it:prices){
        cout<<it<<" ";
    }
    cout<<endl;
    int pro =0;
    pro = maxProfit(prices);
    
    cout<<pro<<endl;

}