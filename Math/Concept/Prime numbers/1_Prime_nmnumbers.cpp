#include<bits//stdc++.h>
using namespace std;

// Function to check whether number is prime or not

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    int c = 2;
    while(c*c<=n){
        if(n%c==0){
            return false;
        }
        c++;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    bool ans = isPrime(n);
    if(ans){
        cout<<"Number is prime "<<endl;
    }else{
        cout<<"Number is not prime "<<endl;
    }

}
