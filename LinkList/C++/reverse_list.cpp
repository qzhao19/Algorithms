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
    ListNode* reverseList(ListNode* head) {
        
        if (head == NULL || head -> next ==NULL){
            return head;
        }
        
        ListNode *prev_node = head;
        ListNode *cur_node = prev_node -> next;
        
        while (cur_node != NULL){
            
            ListNode *next_node = cur_node -> next;
            
            cur_node -> next = prev_node;
            prev_node = cur_node;
            cur_node = next_node;

        }
        
        // first node point a null point
        head -> next = NULL;
        head = prev_node;
        
        return head;
        
        
        
        
        
    }
};