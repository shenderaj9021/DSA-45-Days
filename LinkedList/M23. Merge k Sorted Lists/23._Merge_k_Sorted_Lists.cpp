//  23. Merge k Sorted Lists


// more approches given in leetcode solution once see that

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        for(auto it:lists){
            ListNode* head = it;
            while(head!=NULL){
                vec.push_back(head->val);
                head=  head->next;
            }
        }
        ListNode* head = NULL;
        sort(vec.begin(),vec.end());
        ListNode* temp=NULL;
        for(auto it:vec){
            ListNode* newnode = new ListNode(it);
            if(temp==NULL){
                temp = newnode;
                head = temp;
                continue;
            }
            temp->next = newnode;
            temp = temp->next;
        }
     
       
        return head;
    }
};