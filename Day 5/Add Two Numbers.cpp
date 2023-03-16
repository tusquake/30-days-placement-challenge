class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t=new ListNode();
        ListNode* temp=t;
        int c=0,sum;
        while(l1||l2||c){
            sum=0;
            if(l1){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2){
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+c;
            c=sum/10;
            ListNode* n=new ListNode(sum%10);
            temp->next=n;
            temp=temp->next;
        }
        return t->next;
    }
};
