#include<iostream>
using namespace std;

int main(){
    int arr[] = {20,30,40,50,100,110};
    int n = sizeof(arr)/sizeof(int);
    int key ;
    cout<<"Enter key to search "<<endl;
    cin>>key;
    bool present = bsearch(arr,arr+n,key);
    cout<<present;
}