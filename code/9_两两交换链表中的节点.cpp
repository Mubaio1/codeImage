/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *tmp = head;
    struct ListNode *rev = tmp->next;
    struct ListNode *pre = rev;
    while(tmp!=NULL && rev!=NULL){
        tmp->next = rev->next;
        rev->next = tmp;
        tmp = tmp->next;
        if(tmp == NULL || tmp->next == NULL){
            break;
        }
        rev->next->next = tmp->next;
        rev = tmp->next;
    }
    return pre;
}