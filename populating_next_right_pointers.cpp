/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void doBFS(queue<Node*> q)
    {
        while(!q.empty())
        {
            vector<int> list;
            int s = q.size();
            Node* curr = NULL;
            for(int i = 0; i<s;i++)
            {
                Node* prev = curr;
                curr = q.front();
                q.pop();
                if(prev!=NULL)
                {
                  prev->next = curr;  
                }
                if(curr->left!=NULL)
                q.push(curr->left);
                    if(curr->right!=NULL)
                    q.push(curr->right);
            }
       }
    } 
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root == NULL)
            return NULL;
        q.push(root);
        doBFS(q);
        return root;
    }
};