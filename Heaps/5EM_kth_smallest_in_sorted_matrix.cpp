/*https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
we will use maxheap for this 

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> q;
        for(auto it:matrix){
            for(auto jt:it){
                q.push(jt);
                if(q.size()>k){
                    q.pop();
                }
                
            }
        }
        return q.top();
    }
};


*/