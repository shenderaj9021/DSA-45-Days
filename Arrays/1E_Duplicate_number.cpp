#include<iostream>
#include<bits//stdc++.h>
using namespace std;
int findduplicate(vector<int> nums){
    int ans =0;
    for(int i=0;i<nums.size();i++){
        int n = abs(nums[i]);                                   ///condition
        if(nums[n]<0){
            ans = n;git 
            break;
        }
        nums[n]*=-1;
    }
    for(auto it:nums){                                           // to return array as given
        it =abs(it);
    }
    return ans;
}
int main(){
    vector<int> nums;
    nums ={1,3,4,2,2}   ;        //hard code array
    int ans = findduplicate(nums);
    cout<<ans<<endl;

    
}