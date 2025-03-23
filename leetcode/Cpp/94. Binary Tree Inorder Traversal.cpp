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
        vector<int> inorderTraversal(TreeNode* root) {
            vector<TreeNode*> S;
            vector<int> ret;
            TreeNode* curr = root;
    
            // 看题，是中序遍历
            while(curr != nullptr || !S.empty()){ // 当目前所指结点非空或者栈中还有元素
                while(curr!= nullptr){ // 目前结点还有效
                    S.push_back(curr); // 将目前结点压栈
                    curr = curr->left; // 继续向左遍历
                }
    
                curr = S.back(); // 得到栈顶的值，此时为目前子树的最左侧
                S.pop_back();// 结点出栈 
                ret.push_back(curr->val); // 访问结点
    
                curr = curr->right; // 处理右子树
            }
            
            return ret;
        }
    };