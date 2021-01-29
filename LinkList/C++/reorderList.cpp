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
    void reorderList(ListNode* head) {
        if (head == NULL) {
            return ;
        }

        vector<ListNode*> node_vec;
        ListNode *node = head;

        while (node != NULL) {
            node_vec.push_back(node);
            node = node -> next; 
        }

        int left = 0, right = node_vec.size() - 1;
        while (left < right) {
            node_vec[left] -> next = node_vec[right];
            left++;

            if (left == right) {
                break;
            }

            node_vec[right] -> next = node_vec[left];
            right--;
        }

        node_vec[left] -> next = nullptr;
    }
};