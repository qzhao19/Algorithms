/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *cur_node = head;

        if (head == NULL) {
            return nullptr;
        }

        while (cur_node != NULL && cur_node -> next != NULL) {
            if (cur_node -> val == cur_node -> next -> val) {
                cur_node -> next = cur_node -> next -> next;
            } else {
                cur_node = cur_node -> next;
            }
            
        }

        return head;

    }
};