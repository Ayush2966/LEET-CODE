class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
   int carry = 0;
    ListNode* ansHead = new ListNode();
    ListNode* temp = ansHead;
    
    while (l1 != nullptr || l2 != nullptr || carry !=0) {
       
        int val1= 0;
        if (l1 != nullptr) {
            val1=l1->val;
        l1=l1->next;
        }
        int val2=0;
        if (l2 != nullptr) {
           
            val2= l2->val;
        l2=l2->next;
        }
        int sum= val1+ val2+ carry;
        int digit = sum % 10;
        carry = sum / 10;
        ListNode* ans = new ListNode(digit);
          temp->next= ans;
          temp= temp->next;
    } 
    return ansHead->next;
    }
};
