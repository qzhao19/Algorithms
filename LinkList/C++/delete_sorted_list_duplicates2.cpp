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
    ListNode* deleteDuplicates(ListNode* head) {
        // define a dummy head node
        
        
        ListNode *dummy_node = new ListNode(0);
        dummy_node -> next =head;
        
        ListNode *cur_node = head;
        ListNode *prev_node = dummy_node;
        
        while (prev_node ->next != NULL){
            
            int counter = 0;
            
            while (cur_node != NULL && prev_node -> next -> val == cur_node -> val){
                
                counter++;
                cur_node = cur_node -> next;
            }
            
            if (counter == 1){
                prev_node = prev_node -> next;
            }else{
                prev_node -> next = cur_node;
            }
            
        }
        
        return dummy_node -> next;
        
    }
};