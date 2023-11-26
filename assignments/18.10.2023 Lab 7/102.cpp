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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        if(root==NULL)
            return a;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> b;
        while(!q.empty())
        {
            TreeNode* n = q.front();
            q.pop();

            if(n != NULL)
            {
                b.push_back(n->val);
                
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            else
            {
                a.push_back(b);
                b.resize(0);

                if(!q.empty())
                    q.push(NULL);
            }    
        }
        return a;   
    }
};