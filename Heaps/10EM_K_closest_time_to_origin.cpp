/* https://leetcode.com/problems/k-closest-points-to-origin

- we wil calculate dis of each point
-insert pair of distance of each point and index of point in maxheap
-if maxheap size greater than  k pop element from it
- at last we will have k closet element pop them and return element at index in pair

why maxheap- 
 we have to find k closest that distance should be minimum
 so due to use of maxheap we will get minimum dist at bottom of heap
 and at time of pop we will popped out element with greater distance
 

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>> pq;
        int i=0;
        for(auto it:points){
            float d=0;
            for(auto jt:it){
                float temp = float(jt)*float(jt);
                d+=temp;
            }
            d=sqrt(d);
     
            pq.push({d,i});
            i++;
            if(pq.size()>k){
                pq.pop();
            }
        }
       
        vector<vector<int>> ans;
        while(pq.size()>0){
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
        
    }
};



*/