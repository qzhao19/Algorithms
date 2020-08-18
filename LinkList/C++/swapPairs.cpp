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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) {
            return nullptr;
        }

        ListNode *dummy_node = new ListNode(INT_MAX);
        dummy_node -> next = head;

        ListNode *prev_node = dummy_node;

        while (prev_node -> next != NULL && prev_node -> next -> next != NULL) {
            ListNode *cur_node = prev_node -> next;
            ListNode *succ_node = prev_node -> next -> next;

            prev_node -> next = succ_node;
            cur_node -> next = succ_node -> next;
            succ_node -> next = cur_node;

            prev_node = prev_node -> next -> next;
        }

        return dummy_node -> next;
    }
};