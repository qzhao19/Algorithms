/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:

    void dfs(TreeNode *node){
        if (node){
            swap(node -> left, node -> right);
            dfs(node -> left);
            dfs(node -> right);
        }
    }

public:
    TreeNode* mirrorTree(TreeNode* root) {
        if (root == NULL){
            return nullptr;
        }
        dfs(root);
        return root;
    }
};