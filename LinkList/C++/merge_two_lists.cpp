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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode *dummy_node = new ListNode(0);
        ListNode *cur_node = dummy_node;
        ListNode *tmp;
        
        while (l1 != NULL || l2 != NULL){
            if (l2 == NULL || (l1 != NULL && (l1 -> val < l2 -> val))){
                cur_node -> next = l1;
                tmp = l1 -> next;
                l1 = tmp;
                
            }else{
                cur_node -> next = l2;
                tmp = l2 -> next;
                l2 = tmp;
            }
            cur_node = cur_node -> next;
        } 
    return dummy_node -> next;
    }
};