class Solution {
public:
    TreeNode* solve(vector<int> v , int low , int high){
        if(low > high) return NULL;
        int mid = (low+high)/2;
        TreeNode * h = new TreeNode(v[mid]);
        h->left = solve(v,low,mid-1);
        h->right = solve(v,mid+1,high);
        return h;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        ListNode * h = head;
        while(h){
            v.push_back(h->val);
            h = h->next;
        }
        return solve(v,0,v.size()-1);
    }
};
