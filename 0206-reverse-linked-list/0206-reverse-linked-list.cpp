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
        ListNode * current = head;
        ListNode * previous = NULL;
        ListNode * next;

        while(current != NULL){
            next = current->next; // Set head

            current->next = previous; // Reverse ->next
            previous = current; // Set previous as the current
            current = next; // Set current as the next

        }

        // Return previous because current and next run until they're NULL
        return previous;
    }
};
