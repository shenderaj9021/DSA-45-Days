/**
 * https://leetcode.com/problems/add-two-numbers/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * 
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto it = l1;
        auto jt = l2;
   
        ListNode* l = new ListNode(0);
        ListNode* ans =l;
        int prev =0;
        while(it!=NULL && jt!=NULL){
            int temp = it->val+jt->val;
            temp+=prev;
            ListNode* newnode = new ListNode((temp%10));
               prev =0;
            if(temp>=10){
               prev =1;
            }
            it=it->next;
            jt=jt->next;
            l->next = newnode;
            l =l->next;
        }
          while(it!=NULL){
            int temp = it->val;
            temp+=prev;
            ListNode* newnode = new ListNode((temp%10));
             prev =0;
            if(temp>=10){
               prev =1;
            }
            l->next = newnode;
            l =l->next;
            it=it->next;
        }
         while(jt!=NULL){
            int temp = jt->val;
            temp+=prev;
            ListNode* newnode = new ListNode((temp%10));
             prev =0;
            if(temp>=10){
               prev =1;
            }
            l->next = newnode;
            l =l->next;
            jt=jt->next;
        }

  
        if(prev==1){
            l->next = new ListNode(1);
        }
        
          
         
       
     ans =ans->next;
        return ans;
        
    }
   
  
};