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
    int height(TreeNode* root)
    {
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);

        return max(lh, rh) + 1;
    }    
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        if(isBalanced(root->left) == false) return false;

        if(isBalanced(root->right) == false) return false;  

        int lh = height(root->left);
        int rh = height(root->right);

        if(abs(lh-rh) <= 1) return true;
        else return false; 
    }
};