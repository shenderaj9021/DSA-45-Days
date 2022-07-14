// 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   
       int l =0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==n){
            head=head->next;
            return head;
        }
    
        l-=n;
        temp = head;
        while(l>1){
            temp = temp->next;
            l--;
        }
        
       temp->next = temp->next->next;
        return head;
    }
};