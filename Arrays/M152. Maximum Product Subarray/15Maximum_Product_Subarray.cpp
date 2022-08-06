/*152. Maximum Product Subarray

*/
class Solution {
public:
  
    int maxProduct(vector<int>& nums) {
        int product = nums[0];
        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            if(curr==0){
                curr =1;
            }
            curr = curr*nums[i];
            product = max(product,curr);
        }
        curr =nums[nums.size()-1];
        int n = nums.size();
        product = max(curr,product);
        for(int i=n-2;i>=0;i--){
             if(curr==0){
                curr =1;
            }
            curr = curr*nums[i];
            product = max(product,curr);
        }
        return product;
    }
};