
class Solution {
public:
    bool symHelp(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) {
            return true;
        }

        if (left == NULL || right == NULL) {
            return false;
        }

        if (left->val != right->val) {
            return false;
        }

        return symHelp(left->left, right->right) &&
               symHelp(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return root == NULL || symHelp(root->left, root->right);
    }
};
