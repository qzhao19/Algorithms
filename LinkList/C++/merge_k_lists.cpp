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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        
        // checkout exceptional case
        if ((!l1) || (!l2)){
            return l1 ? l1: l2;
        }
        
        // define a new head node and before_insert node
        
        ListNode *head = new ListNode(0);
        ListNode *before_insert = head;
        
        while (l1 != NULL && l2 != NULL){
            
            // compare l1 and l1 vals
            if ((l1 -> val) < (l2 -> val)){
                before_insert -> next = l1;
                l1 = l1 -> next;
            }else{
                before_insert -> next = l2;
                l2 = l2 -> next;
            }
            // update before_insert node
            before_insert = before_insert -> next;
        }
        // merge 
        before_insert -> next = (l1 ? l1 : l2);
        
        return head -> next;
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // define a ans node
        ListNode *ans = nullptr;
        for(int i = 0; i < lists.size(); i++){
            ans = mergeTwoLists(ans, lists[i]);
        }
        return ans;
        
    }
};





