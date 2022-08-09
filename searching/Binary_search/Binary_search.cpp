#include<bits//stdc++.h>
using namespace std;

//Binary search 
int search(int l,int h,int x,int arr[]){
        int mid = (l+h)/2;
        if(arr[mid]==x){
            return true;
        }
        if(arr[mid]<x){
           return  search(mid+1,h,x,arr);
        }else{
           return  search(l,mid-1,x,arr);
        }
        return false;
}

int main(){
   
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    cout<<search(0,9,5,arr);

}


//Time complexity - O(logn)
//Auxilary space complexity - o(log n)  -- due to recursion stack

// for better space complexity we can use iterative methode
