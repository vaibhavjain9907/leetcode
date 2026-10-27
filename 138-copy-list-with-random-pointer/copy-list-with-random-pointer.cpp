/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        Node *temp = head;
        while(temp != NULL){
            Node *copynode = new Node(temp->val);
            copynode -> next = temp -> next;
            temp->next = copynode;

            
            temp = temp->next->next;
        }
        temp = head;
        while(temp != NULL){
            Node *copynode =  temp->next;
             
        if (temp->random != NULL) {
            copynode->random = temp->random->next;
        }

            temp = temp->next->next;
           
        }
       Node *dummynode = new Node(-1);
        Node *res = dummynode;
        temp = head;
        while(temp != NULL){
            res->next = temp->next;
             res= res->next;
            temp->next = temp->next->next;
           
            temp = temp->next;

        }
        return dummynode->next;

    }
};