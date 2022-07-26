#include<bits//stdc++.h>
using namespace std;
// check numbr whether odd or even using bits
int main(){
    int n;
    cout<<"Enter a number to check whether odd or even"<<endl;
    cin>>n;
    if(n&1){
        cout<<"Odd "<<endl;
    }else{
        cout<<"Even "<<endl;
    }
}