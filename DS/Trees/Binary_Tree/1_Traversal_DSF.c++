// DFS explores a path all the way to a leaf before backtracking and exploring another path. 
// Types of DFS: pre-order (NLR), in-order (LNR), and post-order (LRN).

#include <iostream>
#include <vector>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class DSF {
    public:
    // private:
    // int value = 0;
    // TreeNode* left  = nullptr;
    // TreeNode* right = nullptr;
    // public:
    // DSF(int val) {
    //     value = val;
    // }
    vector<int> preOrderTraversal(TreeNode* root) {
        
    }
} 
