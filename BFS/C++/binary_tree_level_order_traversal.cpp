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
        
        vector<vector<int>> ans;
        // checkout if root is null
        if (root == NULL){
            return ans;
        }
        
        //setup a queue to record tree node
        queue<TreeNode *> node_queue;
        
        // setup seconde queue to record depth info
        queue<int> node_depth_queue;
        
        node_queue.push(root);
        node_depth_queue.push(0);
        
        while (!node_queue.empty()){
            
            // get relative info about node and depth
            TreeNode *cur_node = node_queue.front(); node_queue.pop();
            int cur_node_depth = node_depth_queue.front(); node_depth_queue.pop();
            
            if (ans.size() == cur_node_depth){
                ans.emplace_back();
            }
            
            ans[cur_node_depth].push_back(cur_node ->val);
            
            if (cur_node -> left != NULL){
                node_queue.push(cur_node -> left), node_depth_queue.push(cur_node_depth + 1);
            }
            
            if (cur_node -> right != NULL){
                node_queue.push(cur_node -> right), node_depth_queue.push(cur_node_depth + 1);
            }
            
        }
        return ans;
    }
};







