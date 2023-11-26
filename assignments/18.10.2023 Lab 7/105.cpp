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

    int index = 0;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end)
    {

        if(start > end)
            return NULL;

        int curr = preorder[index];
        index++;
        TreeNode* n = new TreeNode(curr);

        int pos;
        for(int i=start; i<=end; i++){
            if(inorder[i] == curr){
                pos =i;
                break;
            }
        }

        n->left = helper(preorder, inorder, start, pos-1);
        n->right= helper(preorder, inorder, pos+1, end);
        return n;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, inorder, 0, inorder.size()-1);
    }
};