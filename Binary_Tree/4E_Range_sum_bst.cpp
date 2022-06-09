/*https://leetcode.com/problems/range-sum-of-bst


Here i use non recursive approch

 int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL){
            return 0;
        }
        int sum =0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->val>=low && temp->val<=high){
                sum+=temp->val;
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        return sum;
    }



*/