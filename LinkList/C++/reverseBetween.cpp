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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if (head == NULL) return NULL;
        if (n < m) return NULL;

        // dummy node
        ListNode *dummy_node = new ListNode(0);
        dummy_node -> next = head;

        ListNode *prev_node = dummy_node;

        for (int i = 0; i < m - 1; i++){
            prev_node = prev_node -> next;
        }

        //define current node
        ListNode *cur_node = prev_node -> next;

        for (int i = m; i < n; i++){
            //define successor node
            ListNode *succ_node = cur_node -> next;
            cur_node -> next = succ_node -> next;
            succ_node -> next = prev_node -> next;
            prev_node -> next = succ_node;

        }

        return dummy_node -> next;

    }
};