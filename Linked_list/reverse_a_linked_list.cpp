#include<bits\stdc++.h>
using namespace std;

  struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;


        ListNode*temp;
        temp = head;

        while(temp){
            a.push_back(temp->val);
            temp =  temp->next;
        }

        int size = a.size()-1;
        
        temp = head;
        while(temp){
            temp->val = a[size];
            size--;
            temp = temp->next;
        }
        return head;
   
       
    }
};


/// new solution 

ListNode * reverse(ListNode* head){
    ListNode * curr = head;
    ListNode * prev = nullptr;
    ListNode * fut = nullptr;

    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;

    }






}

ListNode * Reverse(ListNode * curr,ListNode * prev){
    // base case

    if(curr == nullptr){
        return prev;

    }

    ListNode * fut;
    fut = curr->next;
    curr->next = prev;
    return Reverse(fut,curr);


}

// by using recurison

int main(){
    


}