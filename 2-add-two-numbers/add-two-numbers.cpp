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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummynode = new ListNode (-1);
        ListNode *curr  = dummynode;
        ListNode* temp1 = l1;
        ListNode *temp2  = l2;
        int carry = 0;

        while(temp1 != NULL || temp2  != NULL){
            if(l1 == NULL || l2 ==NULL) return NULL;
            int sum = carry;
            if(temp1) sum = sum + temp1->val;
            if(temp2) sum = sum+temp2->val;
            ListNode *NewNode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = NewNode;
            curr = curr->next;
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        if(carry){
            ListNode *NewNode = new ListNode(carry);
            curr->next = NewNode;
        }
    return dummynode->next;
    }
};