/* Structure for Link list node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteK(Node* head, int K) {
        Node * curr = head;
        Node * prev = NULL;
        
        int count = 1;
        
        while(curr){
           if(count%K==0){
               prev->next= curr->next;
               delete curr;
               curr = prev->next;
               count++;
           }
           else{
               prev= curr;
               curr = curr->next;
               count++;
           }
           
        
        }
        return head;
        
        
    }
};