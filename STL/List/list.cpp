#include<iostream>
#include<bits//stdc++.h>
using namespace std;

int main(){
    list<int> l;
    list<int> l1{1,2,310,8,5};
    l1.push_back(100);
    
    //sort
    l1.sort();
    //reverse
    l1.reverse();

    //pop_front
    l1.pop_front();
    // add to the front
    l1.push_back(10);

    //push front
    l1.push_front(90);

    // remove element from list
    l1.remove(2);
      for(auto it:l1){
        cout<<it<<endl;
    }
    
}