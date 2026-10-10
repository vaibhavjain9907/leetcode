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
    int findtail(ListNode* head){
        ListNode *temp = head;
    int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
         if (head == NULL || head->next == NULL)
            return head;
        
            int len = findtail(head) ;
         k = k % len;
         
if (k == 0)
            return head;
        
         ListNode *temp = head;
         ListNode* newHead = NULL;
         

        int kthnode = len - k;

         for (int i = 1; i < kthnode; i++) {
            temp = temp->next;
        }
         newHead = temp->next;
         temp->next = NULL;
         
         
         ListNode *kthnod = newHead;
         
         while(kthnod->next!= NULL){
            
            kthnod = kthnod -> next;
         }
         kthnod->next = head;
         return newHead;
    }
};