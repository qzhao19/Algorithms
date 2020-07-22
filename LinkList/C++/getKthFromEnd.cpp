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
    ListNode* getKthFromEnd(ListNode* head, int k) {

        ListNode *first = head;
        ListNode *second = head;

        while (first != NULL && k > 0){
            first = first -> next;
            k--;
        }

        while (first != NULL){
            first = first -> next;
            second = second -> next;

        }

        return second;

    }
};