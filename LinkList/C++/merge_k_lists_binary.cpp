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
    
    ListNode *mergeTwoList(ListNode *l1, ListNode *l2){
        // checkout exceptional case
        if ((!l1) || (!l2)){
            return l1 ? l1: l2;
        }
        ListNode *head = new ListNode(0);
        ListNode *before_insert = head;
        
        while (l1 != NULL && l2 != NULL){
            
            // compare l1.val and l2.val
            if (l1 -> val  < l2 -> val){
                before_insert -> next = l1;
                l1 = l1 -> next;
            }else{
                before_insert -> next = l2;
                l2 = l2 -> next;
            }
            // update 
            before_insert = before_insert -> next;
            
        }
        //merge 
        before_insert -> next = (l1 ? l1 : l2);
        
        return head -> next;
    }
    
    
    ListNode *merge(vector<ListNode*> lists, int left, int right){
        
        if (left == right){
            return lists[left];
        }
        
        if (left > right){
            return NULL;
        }
        
        int mid = (left + right) >> 1;
        
        return mergeTwoList(merge(lists, left, mid), merge(lists, mid+1, right));
        
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     
        return merge(lists, 0, lists.size() - 1);  
                
    }
};