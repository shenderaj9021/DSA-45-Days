#include<bits//stdc++.h>
using namespace std;

// Factors is number which dividing that number

void factors1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
          
        }
    }
}
// Now we will optimize above as
// if i is factor of n then n/i is also factor of n
void factors2(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
           if(n/i==i){
               cout<<i<<" ";
           }else{
               cout<<i<<" "<<n/i<<" ";
           }
        }
    }
}

int main(){
    cout<<"Enter a number "<<endl;
    int n;
    cin >>n;
    factors1(n);
    cout<<endl;
    factors2(n);

}