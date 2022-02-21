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
    vector<int> doBFS(queue<TreeNode*> q, vector<int> res)
    {
        while(!q.empty())
        {
            vector<int> list;
            int s = q.size();
            TreeNode* curr = NULL;
            for(int i = 0; i<s;i++)
            {
                curr = q.front();
                q.pop();
                list.push_back(curr->val);
                if(curr->left!=NULL)
                q.push(curr->left);
                    if(curr->right!=NULL)
                    q.push(curr->right);
            }
            res.push_back(curr->val);
        }
        return res;
    }
    vector<int> rightSideView(TreeNode* root) {
         vector<int> res;
        queue<TreeNode*> q;
        if(root == NULL)
                return res;
        q.push(root);
        res = doBFS(q,res);
        return res;
    }
};