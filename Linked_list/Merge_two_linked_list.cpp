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
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;
        vector<int> a;
        while(temp1){
            a.push_back(temp1->val);
            temp1 = temp1 ->next;

        }
        
        vector<int> b;
        while(temp2){
            b.push_back(temp2->val);
            temp2 = temp2 ->next;

        }
        vector<int> c = a;

c.insert(c.end(), b.begin(), b.end());

    sort(c.begin(),c.end());


    ListNode* head = nullptr;
ListNode* tail = nullptr;

for(int x : c){

    if(head == nullptr){
        head = new ListNode(x);
        tail = head;
    }
    else{
        tail->next = new ListNode(x);
        tail = tail->next;
    }
}

return head;

        
        
        
        
    }
};