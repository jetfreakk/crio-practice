bool util(TreeNode* root, int l, int r){
        if(!root)
            return true;
        if(root->val > l and root->val < r){
            return util(root->left, l, root->val) && util(root->right, root->val, r);  
        }
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        return util(root, LONG_MIN, LONG_MAX);
    }
