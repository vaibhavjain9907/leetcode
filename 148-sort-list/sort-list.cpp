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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode dummy(0);
        ListNode* prevNode = &dummy;
        while(temp1 != NULL && temp2 != NULL){
            

            if(temp1->val <= temp2->val){
               prevNode -> next = temp1;
 
               temp1 = temp1->next;
               }
            else{
                prevNode->next= temp2;
                temp2 = temp2->next;

                }
                prevNode = prevNode->next;
        }
         if (temp1 != NULL)
            prevNode->next = temp1;
        else
            prevNode->next = temp2;
return dummy.next;    }
 ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        return slow;
 }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *middle = middleNode(head);
        ListNode *leftHead = head;
        ListNode *rightHead  = middle->next;
        middle->next = NULL;
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);
        return mergeTwoLists(leftHead,rightHead); 
    }
};