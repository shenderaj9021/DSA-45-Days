#include<bits//stdc++.h>
using namespace std;
// lets see how to find square root


// lets find square root using binary search
// Time complexity log(n)
double Sqrt(int n,int p){
    int s =0;
    int e = n;
    double root = 0.0;
    // using binary search
    while(s<=e){
        int  m = s+(e-s)/2;
        if(m*m==n){
            root = m;
            return root;
        }
        if(m*m>n){
            e  = m-1;
        }else{
            s = m+1;
        }
    }
    // to adjust decimal palce upto p
    double inc =0.1;
    for(int i=0;i<p;i++){
        while(root*root<=n){
            root+=inc;
        }
        root-=inc;
        inc/=10;
    }
    return root;
}

// Newton Rapson method - O(log(n)F(N))
//where F(N) - complexity of calculating F(N)/f'(N)
 
 double NRM(double n){
     double x=n;
     double root;
     while(true){
         root = 0.5*(x+(n/x));
        if(abs(root-x)<1){
            break;
        }
        x = root;
     }
     return root;
 }

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    double ans = Sqrt(n,4);
    cout<<"square root of using Binary search is "<<n<<" is "<<ans<<endl;
    ans = NRM(n);
    cout<<"square root of using NRM is "<<n<<" is "<<ans<<endl;


}




