#include<bits//stdc++.h>
using namespace std;
int main(){
        int n;
        int m;
        cin>>n>>m;
        int arr[n];
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++){
            cin>> arr[i];
            if(mp.find(arr[i])==mp.end()){
                mp.insert({arr[i],{i,i}});
            }else{
                mp[arr[i]].second = i;
            }
        }
        while(m>0){
            m--;
            int curr_pos ;
            int visit_branch;
            cin>> curr_pos>>visit_branch;
            if(arr[curr_pos-1]==visit_branch || mp.find(visit_branch)==mp.end()){
                cout<<"-1"<<endl;
                continue;
            }
            int d1 = mp[visit_branch].first-curr_pos+1;
            int d2 = mp[visit_branch].second-curr_pos+1;
            if(d1<0 && d2<0 || (d1<0 && abs(d1)<abs(d2)) || (d2<0 && abs(d2)<abs(d1))){
                cout<<"left"<<endl;
            }else{
                cout<<"Right"<<endl;
            }
        }
     
    
}