/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi = 0 ;
        findi(root , maxi) ;
        return maxi ;
 
    }

    int findi(TreeNode* root , int &maxi){
        if(root == NULL) return 0 ;

        int lh = findi(root->left , maxi) ;
        int rh = findi(root->right , maxi) ;
        maxi = max(maxi , lh+rh) ;
        return max(lh , rh) + 1 ;
    }
};