/* 4. Median of Two Sorted Arrays
https://leetcode.com/problems/median-of-two-sorted-arrays/
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        stack<int> st;
        bool flag = false;
        if(n%2==0){
            flag = true;
        }
        int i =0;
        int j=0;
        while(i<nums1.size() && j<nums2.size() && st.size()!=(n/2)+1){
            if(nums1[i]<nums2[j]){
                st.push(nums1[i]);
                i++;
            }else{
                st.push(nums2[j]);
                j++;
            }
          
        }
        while(st.size()!=(n/2)+1 && i<nums1.size()){
            st.push(nums1[i]);
            i++;
        }
        while(st.size()!=(n/2)+1 && j<nums2.size()){
            st.push(nums2[j]);
            j++;
        }
        double sum =0;
        cout<<st.top()<<endl;
        if(flag){
            sum = double(st.top());
            st.pop();
            sum += double(st.top());
            sum=sum/2;
        }else{
           
            sum+=double(st.top());
        }
      return sum;
                                                
    }
};