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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if (head == NULL) {
                return head;
            }
            struct ListNode* tmp = head;
            struct ListNode* before = head;
            struct ListNode* front = head;
            for (int i = 0; i < n - 1; i++) {
                front = front->next;
            }
            while (front->next != NULL) {
                front = front->next;
                if (front->next == NULL) {
                    tmp = tmp->next;
                    break;
                }
                tmp = tmp->next;
                before = before->next;
            }
            if(before == front){//front没动，说明n=1且就一个节点
                return NULL;
            }else if(before==tmp){//before==tmp说明tmp要删去
                return before->next;
            }
            else{
                before->next = tmp->next;
            }
            return head;
        }
    };