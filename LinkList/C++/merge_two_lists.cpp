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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
//         ListNode *dummy_node = new ListNode(0);
//         ListNode *cur_node = dummy_node;
//         ListNode *tmp;
        
//         while (l1 != NULL || l2 != NULL){
//             if (l2 == NULL || (l1 != NULL && (l1 -> val < l2 -> val))){
//                 cur_node -> next = l1;
//                 tmp = l1 -> next;
//                 l1 = tmp;
                
//             }else{
//                 cur_node -> next = l2;
//                 tmp = l2 -> next;
//                 l2 = tmp;
//             }
//             cur_node = cur_node -> next;
//         } 
//     return dummy_node -> next;
//     }
// };


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
        
        //checkout exceptional case
        if ((!l1) || (!l2)){
            return l1 ? l1 : l2;
        }
           
        
        // define a head node that presents a head node of merged list
        ListNode *head = new ListNode(0), *before_insert = head, *l1_node = l1, *l2_node = l2;
        
        while (l1_node != NULL && l2_node != NULL){
            
            if (l1_node -> val < l2_node -> val){
                before_insert -> next = l1_node;
                l1_node = l1_node -> next;
            }else{
                before_insert -> next = l2_node;
                l2_node = l2_node -> next;
            }
            
            before_insert = before_insert -> next;
        }
        
        before_insert -> next = (l1_node ? l1_node : l2_node);
        
        return head -> next;
    }
};