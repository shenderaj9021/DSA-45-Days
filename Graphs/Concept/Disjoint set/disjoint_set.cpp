#include <bits/stdc++.h>
using namespace std;
int n = 10;
class DisjointUnionset{
    // public DisjointUnionset(int n){
    //  int rank[n];
    //  int parent[n];
    //  for(int i=0;i<n;i++){
    //     parent[i] = i;
    //  }

    // }
    DisjointUnionset(){
        int rank[n];
        int parent[n];
        for(int i=0;i<n;i++){
            parent[i] = i;
        }

    }
    int find(int i){
        if(parent[i]==i){
            return i;
        }else{
            return find(parent,parent[i]);
        }


    void Union(int parent[],int x,int y){
        int xroot =find(x);
        int yroot = find(y);
        if(xroot==yroot){
            return 
        }
        if(rank[xroot]<rank[yroot]){
            parent[yroot] = xroot;
        }else{
            parent[yroot] = xroot;
            rank[xroot] = rank[xroot]+1;
        }

    }

}
