#include <iostream>
#include <algorithm>
#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        maxPathSumHelper(root, maxSum);
        return maxSum;
    }

private:
    int maxPathSumHelper(TreeNode* node, int& maxSum) {
        if (!node) return 0;

        // Recursively get the maximum path sum of left and right subtrees
        int leftMax = std::max(0, maxPathSumHelper(node->left, maxSum));
        int rightMax = std::max(0, maxPathSumHelper(node->right, maxSum));

        // Update maxSum if the current path sum is greater
        int currentMax = node->val + leftMax + rightMax;
        maxSum = std::max(maxSum, currentMax);

        // Return the maximum path sum including the current node
        return node->val + std::max(leftMax, rightMax);
    }
};

int main() {
    // Example usage
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution solution;
    std::cout << "Maximum Path Sum: " << solution.maxPathSum(root) << std::endl;

    // Free the allocated memory
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
