class Solution {
public:
    ListNode* reverseList(ListNode* head) {
     if(head==nullptr || head->next==nullptr)
     {
         return head;
     }
     ListNode *curr, *prev, *next;
     curr=head;
     prev=nullptr;
     while(curr!=nullptr)
     {
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
     }
     return prev;
    }
};
