class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        while(head!=NULL && head->next!=NULL)
        {
            slow=slow->next;
            head=head->next->next;
        }
        return slow;
    }
};
