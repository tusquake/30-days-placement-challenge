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
    //ITERATIVE
    // ListNode* reverse(ListNode* head){
    //     if(head==NULL) return head;
    //     ListNode *curr=head,*prev=NULL,*n=head->next;
    //     while(curr!=NULL){
    //         curr->next=prev;
    //         prev=curr;
    //         curr=n;
    //         if(n!=NULL) n=n->next;
    //     }
    //     return prev;
    // }
    //RECURSIVE
    ListNode* reverserecur(ListNode* head){
        if(head==NULL||head->next==NULL) return head;
        ListNode* reversenode=reverserecur(head->next);
        head->next->next=head;
        head->next=NULL;
        return reversenode;
    }

    ListNode* reverseList(ListNode* head) {
        // return reverse(head);
        return reverserecur(head);
    }
};
