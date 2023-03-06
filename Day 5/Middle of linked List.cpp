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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp=head;
        // int c=0;
        // while(temp){
        //     temp=temp->next;
        //     c++;
        // }
        // c=c/2;
        // temp=head;
        // int i=1;
        // while(i<=c){
        //     temp=temp->next;
        //     i++;
        // }
        // return temp;

        ListNode *fast=head,*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
