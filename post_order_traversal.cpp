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
    vector<int> preOrderDFS(stack<TreeNode*> st, vector<int> list)
    {
        while(!st.empty())
        {
            TreeNode* curr = st.top();
            st.pop();
            list.insert(list.begin(),curr->val);
            if(curr->left!=NULL)
                st.push(curr->left);
            if(curr->right!=NULL)
                st.push(curr->right);
                
        }
        return list;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
                return ans;
        stack<TreeNode*> st;
        st.push(root);
        vector<int> list;
        ans = preOrderDFS(st,list);
        return ans;
        
    }
};