
// Definition for singly-linked list.
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        //vreate a dummy node 
        ListNode *dummy = new ListNode(0);
        
        //current node that to point to dummay node
        ListNode *cur_node = dummy;
        
        // define carry pos
        int carry = 0;
        
        while (l1 != NULL || l2 != NULL || carry > 0){
            
            if (l1 != NULL){
                carry += l1 -> val;
                l1 = l1 -> next;
            }
            if (l2 != NULL){
                carry += l2 -> val;
                l2 = l2 -> next;
            }
            // add carry val to next position
            cur_node -> next = new ListNode(carry%10);
            // move current pointer
            cur_node = cur_node -> next;
            carry /= 10;
        }
        
        return dummy -> next;
    
    }
};