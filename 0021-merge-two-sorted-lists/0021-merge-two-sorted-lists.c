/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode * newHead = NULL;
    struct ListNode * currentNode = NULL;
    struct ListNode * ptrBuilder;

    while (list1 != NULL && list2 != NULL){

        if(list1->val <= list2->val){ // List2 NULL or list1 bigger than list2
            ptrBuilder = list1; // set next node to list1 node
            list1 = list1->next;
        } else {
            ptrBuilder = list2; // set next node to list2 node
            list2 = list2->next;
        }

        if (newHead != NULL){
            currentNode->next = ptrBuilder;
            currentNode = ptrBuilder;
        } else {
            newHead = ptrBuilder;
            currentNode = ptrBuilder;
        }
    }

    while (list1 != NULL){
        ptrBuilder = list1;
        list1 = list1->next;
        
        
        if (newHead != NULL){
            currentNode->next = ptrBuilder;
            currentNode = ptrBuilder;
        } else {
            newHead = ptrBuilder;
            currentNode = ptrBuilder;
        }
    }

    while (list2 != NULL){
        ptrBuilder = list2;
        list2 = list2->next;
        
        
        if (newHead != NULL){
            currentNode->next = ptrBuilder;
            currentNode = ptrBuilder;
        } else {
            newHead = ptrBuilder;
            currentNode = ptrBuilder;
        }
    }

    return newHead;
}