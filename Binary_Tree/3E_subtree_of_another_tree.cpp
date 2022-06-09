/*
https://leetcode.com/problems/subtree-of-another-tree


class Solution {
public:
    bool check(TreeNode* root,TreeNode* subRoot){
        if(root==NULL && subRoot==NULL){
            return true;
        }
        if(root==NULL || subRoot==NULL){
            return false;
        }
        if(root->val!=subRoot->val){
            return false;
        }
    
        bool l = check(root->left,subRoot->left);
        bool r = check(root->right,subRoot->right);
        return l&r;
        
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root){
           if(check(root,subRoot)){
               return true;
           }
           return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
       }
        return false;
    }
};

*/