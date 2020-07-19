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
        // define a dummy node
        
        ListNode *dummy_node = new ListNode(0);
        dummy_node -> next = head;
        
        ListNode *first = dummy_node;
        ListNode *second = dummy_node;
        
        for (int i = 0; i < n + 1; i++){
            first = first -> next;
        }
        
        while (first != NULL){
            first = first -> next;
            second = second -> next;
        }
        
        second -> next = second -> next -> next;
        
        return dummy_node -> next;
    }
};