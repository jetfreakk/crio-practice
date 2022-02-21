/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int doBFS(queue<TreeNode*> q)
    {
        TreeNode* curr = NULL;
        while(!q.empty()){
        for (int i = 0;i<q.size();i++)
        {
            curr =  q.front();
            q.pop();
            if(curr->right!=NULL)
                q.push(curr->right);
            if(curr->left!=NULL)
                q.push(curr->left);
        }
        }
        return (curr->val);
    }
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL)
            return 0;
        q.push(root);
        int ans = doBFS(q);
        return ans;
        
    }
};