class Solution {
public:

   TreeNode* solve(ListNode* head, ListNode* tail)
    {
        if(head == tail) return NULL;
        
        if(head->next == tail)
        {
            TreeNode* root = new TreeNode(head->val);
            return root;
        }
        ListNode *mid = head,*temp = head;
        while(temp!=tail && temp->next!=tail)
        {
            mid = mid->next;
            temp = temp->next->next;
        }
        TreeNode* root = new TreeNode(mid->val);
        root->left = solve(head,mid);
        root->right = solve(mid->next,tail);
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        return solve(head,NULL);
    }
};
