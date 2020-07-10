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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        // exception case
        if (headA == NULL || headB == NULL){
            return NULL;
        }
        // get two list length
        int len_A = getListLength(headA);
        int len_B = getListLength(headB);
        
        if (len_A < len_B){
            for (int i = 0; i < len_B - len_A; i++){
                headB = headB -> next;
            }  
        }else{
            
            for (int i = 0; i< len_A - len_B; i++){
                headA = headA -> next;
            }
        }
        
        while (headA != NULL && headB != NULL && headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        
        return (headA == headB)? headA:NULL;
        
    }
    
    
    int getListLength(ListNode* head){
        // define a counter to count list's length
        int counter = 0;
        while (head != NULL){
            ++counter;
            head = head -> next;
            
        }
        return counter;
        
    }
};