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
            if(headA==NULL || headB == NULL){
                return NULL;
            }
            ListNode *A = headA;
            ListNode *B = headB;
            ListNode *Anow = headA;
            ListNode *Bnow = headB;
            int lengthA=0,lengthB=0;
            while(headA->next!=NULL){
                headA = headA->next;
                lengthA++;
            }
            while(headB->next!=NULL){
                headB = headB->next;
                lengthB++;
            }
            int length = abs(lengthA-lengthB);
            if(lengthA > lengthB){
                for(int i=0;i<length;i++){
                    Anow = Anow->next;
                }
            }else{
                for(int i=0;i<length;i++){
                    Bnow = Bnow->next;
                }
            }
            while(Anow!=Bnow && Anow->next!=NULL &&Bnow->next!=NULL){
                Anow = Anow->next;
                Bnow = Bnow->next;
            }
            if(Anow == Bnow){
                return Anow;
            }else{
                return NULL;
            }
        }
    };