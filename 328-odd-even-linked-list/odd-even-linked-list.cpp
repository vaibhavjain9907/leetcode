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
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *dummy = new ListNode(-1);
        ListNode *curr = dummy;
        ListNode *temp = head;
        while(temp != NULL){
            ListNode *newnode = new ListNode(temp->val);
          
            curr->next = newnode;
            curr = curr->next;
             if (temp->next == NULL)
                break;
            temp = temp->next->next;

        }
        temp = head->next;
        while(temp  != NULL){
            ListNode *newnode = new ListNode(temp->val);
            curr->next = newnode;
             if (temp->next == NULL)
                break;
            temp = temp->next->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};