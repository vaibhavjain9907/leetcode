/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //length based approach
class Solution {
public:
ListNode *CollisionPoint(ListNode *t1 , ListNode* t2, int d){
    while(d){
        d--;
        t2 = t2->next;

    }
    while(t1 != t2){
        t1 = t1->next;
        t2 = t2->next;
    }
    return t1;
}
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1 = headA;
        ListNode* t2 = headB;
        int n1 =0 , n2 = 0;
        while(t1 != NULL){
            n1++;
            t1 = t1->next;
        }
        while(t2 != NULL){
            n2++;
            t2 = t2->next;
        }
        if(n1 < n2){
            return CollisionPoint(headA,headB,n2-n1);
        }
        else{
            return CollisionPoint(headB,headA,n1-n2);
        }
        return nullptr;
    }
};