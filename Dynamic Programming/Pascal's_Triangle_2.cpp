/*https://leetcode.com/problems/pascals-triangle-ii */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        for(int k=1;k<rowIndex+1;k++){
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
            vector<int> temp(ans.size());
            temp[0]=1;
            for(int i=1;i<ans.size();i++){
                temp[i] =ans[i]+ans[i-1];
            }
            temp.push_back(1);
           
            ans = temp;
        }
        return ans;
    }
}