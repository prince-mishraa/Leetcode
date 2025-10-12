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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        if(head->next == NULL && n == 1){
            delete head;
            return NULL;
        }

        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        if(cnt == n){
            ListNode* newHead = head -> next;
            delete head;
            return newHead;
        }

        int result = cnt - n;
        temp = head;
        while(temp != NULL){
            result--;
            if(result == 0) break;
        temp = temp->next;
        }
    ListNode* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
    return head;
    }
};