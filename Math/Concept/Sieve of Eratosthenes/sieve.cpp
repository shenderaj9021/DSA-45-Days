#include<bits//stdc++.h>
using namespace std;

// Function to check whether number is prime or not
// Suppose we have gien a number and have to print which number are prime in given range
// we can apply above function but we going to perform many operation repeatadly
// such as if we find particular number as prime then number which are multiple of this never be prime
// so we will use these approch in seive of eratothenese


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
// False in array means number is prime
void sieve(bool arr[],int n){
    for(int i=2;i*i<=n;i++){
        if(arr[i]==false){
            for(int j =i*2;j<=n;j+=i){
                arr[j]=true;
            }
        }
    }
    // lets print prime number now
    for(int i=0;i<n+1;i++){
        if(arr[i]==false){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    bool arr[n+1];
    for(int i=0;i<n+1;i++){
        arr[i] = false;
    }
    sieve(arr,n);

}


// Time comlexity - how many numbers in loop as
// n/2 + n/3 + n/5 + n/7 .. n/t   t- greates prime numner near to n
// this is log(logn)
// so total time complexity - O(N*log(log(N)))

// space complexity - o(n)  as we forming array