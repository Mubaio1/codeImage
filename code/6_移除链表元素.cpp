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
        ListNode* removeElements(ListNode* head, int val) {
            if (head == NULL) {
                return head;
            }
            ListNode* pre = head;
            while (pre != NULL && pre->next != NULL) {
                ListNode* tmp = pre->next;
                if (tmp->val == val) {
                    pre->next = tmp->next;
                    if (pre->val == val) {
                        head = head->next;
                    }
                } else {
                    pre = pre->next;
                }
            }
            if (head->val == val) {
                head = NULL;
            }
            return head;
        }
    };