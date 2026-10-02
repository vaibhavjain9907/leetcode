/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //optimal pointer approach
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA;
        ListNode *t2 = headB;
        if(headA == NULL || headB == NULL) return NULL;
        while(t1 != t2){
           
            if(t1 == t2) return t1;

            if(t1== NULL){
                t1 = headB;
            }
            else{
                 t1 = t1->next;
            }
            if(t2 == NULL){
                t2 = headA;
            }
            else{
            t2= t2->next;

            }
            
        }
        return t1;
    }
};