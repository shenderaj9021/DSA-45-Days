#include<bits//stdc++.h>
using namespace std;
// Given a array in which every element occured twice except on number find the number
// we will xor property
// a^a = 0
// a^0= a;
// so we willl xor array so by associative property we will get required number at last

int main(){
    int arr[11]={1,2,3,4,5,1,2,3,4,6,5};
    int temp = arr[0];
    for(int i=1;i<11;i++){
       temp=temp^arr[i];
    }
    cout<<temp<<endl;
}