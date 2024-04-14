class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return find_val(root, 1);
    }
    
    int find_val(TreeNode* root, int flag) {
        if (!root) return 0;
        if (flag == 0 && !root->right && !root->left) return root->val;
        return find_val(root->left, 0) + find_val(root->right, 1);
    }
};
