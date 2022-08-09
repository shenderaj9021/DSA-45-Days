#include<bits//stdc++.h>
using namespace std;

//Binary search 
int search(int n,int x,int arr[]){
        if(arr[0] == x){
            return 0;
        }
        int i=1;
        while(i<n && arr[i]<=x){
            i = i*2;
        }
        return search(i/2,x,arr);
        return -1;
}

int main(){
   
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    cout<<search(10,7,arr)<<endl;
    cout<<search(10,34,arr)<<endl;

}


//Time complexity - O(logn)
//Auxilary space complexity - o(log n)  -- due to recursion stack

// for better space complexity we can use iterative methode
