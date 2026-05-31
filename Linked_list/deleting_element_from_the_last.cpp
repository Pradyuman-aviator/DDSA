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
        ListNode* temp = head;
        int count =0;

        while(temp){
            count++;
            temp = temp->next;
        }

        int front = count - n;

        if(front==0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr = head;
        int count1 = 0;

        while(curr && count1 < front){
            prev=curr;
            curr= curr->next;
            count1++;
        }
        prev->next=curr->next;
        delete curr;


        return head;
        
    }
   
};