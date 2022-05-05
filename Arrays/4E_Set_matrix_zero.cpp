//73. Set Matrix Zeroes
//https://leetcode.com/problems/set-matrix-zeroes/
//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//You must do it in place.

#include<iostream>
#include<bits//stdc++.h>
using namespace std;

//this problem can be done in O(n2) space and time complextiy easily but we want more optimized solution
// approach is = we will traverse whole matrix first then if any elment in zero then set first element of row and column to which this current 
//element is belong to zero befor this we will traverse through matrix[i][0] and matrixp[0][j] and if any element if zero we set flag of respective 
void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n =matrix[0].size();
         int fc=0;
        int fr=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){   
                fc=1;
            }
        }
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                fr =1;
            }
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[i].size();j++){
               if(matrix[i][j]==0){
                   matrix[i][0] =0;
                   matrix[0][j]=0;
               }
            }
          
        }
        for(int i=m-1;i>0;i--){
            for(int j=n-1;j>0;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0 ){
                    matrix[i][j] =0;
                }
            }
        }
        if(fc==1){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
        if(fr==1){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
    }

int main(){
    vector<vector<int>> matrix;
    matrix ={{0,1,2,0},{3,4,5,2},{1,3,1,5}} ;//hard code array
    for(auto it:matrix){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    setZeroes(matrix);
    for(auto it:matrix){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }

   
    
}