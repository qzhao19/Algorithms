/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head == NULL) {
            return nullptr;
        }
        if (m > n) {
            return nullptr;
        } 

        ListNode *dummy_node = new ListNode(0);
        dummy_node -> next = head;

        ListNode *prev_ptr = dummy_node;

        for (int i = 0; i < m - 1; i++) {
            prev_ptr = prev_ptr -> next;
        }

        ListNode *cur_ptr = prev_ptr -> next;

        for (int i = m; i < n; i++) {
            ListNode *succ_ptr = cur_ptr -> next;
            cur_ptr -> next = succ_ptr -> next;
            succ_ptr -> next = prev_ptr -> next;
            prev_ptr -> next = succ_ptr;
        }

        return dummy_node -> next;
    }
};