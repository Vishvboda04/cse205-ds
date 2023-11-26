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
private:
    vector<int> ans;

    void preorder(TreeNode* root, vector<int> &a)
    {
        if(root != NULL)
        {
            a.push_back(root->val);
            preorder(root->left, a);
            preorder(root->right, a);
        }
        else
        {
            a.push_back(NULL);
        }
        return;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a,b;
        preorder(p,a);
        preorder(q,b);

        if(a==b) return true;
        else return false;
        
    }
};