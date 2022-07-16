/* 48. Rotate Image
https://leetcode.com/problems/rotate-image/

*/
class Solution {
public:
    void swapt(int  & a,int &b){
        int temp = a;
        a =b;
        b = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
               swap(matrix[i][j],matrix[j][i]);
            }
        }
       
       for(int i=0;i<matrix.size();i++){
           reverse(matrix[i].begin(),matrix[i].end());
       }
    }
};