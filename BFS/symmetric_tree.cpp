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
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         // null tree is symmetric
        
//         if (root == NULL){
//             return true;
//         }
        
//         return isSysmmetric(root -> left, root -> right);
//     }
    
//     bool isSysmmetric(TreeNode *left, TreeNode *right){
        
//         // if sub-nodes are nulls 
//         if (left == NULL && right == NULL){
//             return true;
//         }
        
//         // if left is null and right is not null or others, return false
        
//         if (left == NULL || right == NULL){
//             return false;
//         }
        
//         // checkout the val is same
//         if (left -> val != right -> val){
//             return false;
//         }
        
//         // return the sub-problem of root-problem
//         return isSysmmetric(left -> left, right -> right) && isSysmmetric(left -> right, right -> left);
        
//     }
// };


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        // null tree is symmetric
        if (root == NULL){
            return true;
        }
        
        // define a queue
        queue<TreeNode*> q1, q2;
        q1.push(root -> left);
        q2.push(root -> right);
        
        while (!q1.empty() && !q2.empty()){
            
            TreeNode *tmp_left = q1.front(); q1.pop();
            TreeNode *tmp_right = q2.front(); q2.pop();
            
            if (tmp_left == NULL && tmp_right == NULL){
                continue;
            }
            
            if (tmp_left == NULL || tmp_right == NULL){
                return false;
            }
            
            if (tmp_left -> val != tmp_right -> val){
                return false;
            }
            
            q1.push(tmp_left -> left);
            q1.push(tmp_left -> right);
            
            q2.push(tmp_right -> right);
            q2.push(tmp_right -> left);
            
            
        }
        return true;
    }
    
};



