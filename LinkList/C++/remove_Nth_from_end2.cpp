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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL;
        }

        ListNode *dummy_node = new ListNode(0);
        dummy_node -> next = head;

        ListNode *fast_ptr = dummy_node -> next;
        ListNode *slow_ptr = dummy_node;

        for (int i = 0; i < n; i++) {
            fast_ptr = fast_ptr -> next;
        }

        while (fast_ptr != NULL) {
            fast_ptr = fast_ptr -> next;
            slow_ptr = slow_ptr -> next;
        }

        slow_ptr -> next = slow_ptr -> next -> next;

        return dummy_node -> next;
    }
};