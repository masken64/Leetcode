class Solution {
public:
    int sum = 0;
    string path;
    void pathSum(TreeNode* root)
    {
        if(!root) return;

        path += (to_string(root->val));
        if(!root->left and !root->right) sum += (stoi(path));

        pathSum(root->left);
        pathSum(root->right);
        path.pop_back();
    }
    int sumNumbers(TreeNode* root) 
    {
        pathSum(root);
        return sum;
    }
};
