/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        
        // define a stack to store node value
        ListNode *node = head;
        stack<int> node_stack;
        int counter = 0;
        while (node != NULL){
            node_stack.push(node -> val);
            counter++;
        }
        
        vector<int> ans;
        
        for(int i = 0; (i < counter) && (node_stack.empty() != true); i++){
            
            ans[i] = node_stack.top();
            node_stack.pop();
        }
        
        return ans;

    }
};
