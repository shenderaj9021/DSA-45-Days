#include<bits//stdc++.h>
using namespace std;


int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    cout<<"Enter both number "<<endl;
    int n,m;
    cin>> n>>m;
    cout<<"Gcd of "<<n<<" & "<<m<<"  is "<<gcd(n,m);
    cout<<"lcm of "<<n<<" & "<<m<<"  is "<<lcm(n,m);
}()