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
    ListNode *findKthNode(ListNode *temp, int k){
        k-=1;
        while(k > 0 && temp != NULL){
            k--;
            temp = temp->next;
            
        }
        return temp;
    }
    ListNode *reverse(ListNode *head){  
         if(head == NULL || head->next == NULL) return head;
        ListNode *newhead = reverse(head->next);
        ListNode *front = head->next;
        front -> next = head;
        head->next = NULL;
        return newhead;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while(temp != NULL){
            ListNode *KthNode = findKthNode(temp,k);
            if(KthNode == NULL){
                if(prev){
                    prev -> next = temp;
                    
                }
                break;
            }
                ListNode *NextNode = KthNode->next;
                KthNode->next= NULL;
                reverse(temp);
                if(temp == head){
                    head = KthNode;
                }
                else{
                    prev->next = KthNode;

                }
                    prev = temp;
                    temp = NextNode;
            }
           
        
         return head;
    }
};