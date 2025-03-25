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
        vector<vector<int>> levelOrder(TreeNode* root) {
            // 层序遍历
            deque<TreeNode*> Q, nextQ;
            TreeNode* curr = root;
            vector<vector<int>> ret;
            vector<int> layer;
    
            if(curr != nullptr){
                Q.push_back(curr);
            }
            else{
                return ret;
            }
    
            while(!Q.empty() || !nextQ.empty()){
                while(!Q.empty()){ // 当队列非空
                    layer.push_back(Q.front()->val);
                    if(Q.front()->left){
                        nextQ.push_back(Q.front()->left);
                    }
                    if(Q.front()->right){
                        nextQ.push_back(Q.front()->right);
                    }
                    Q.pop_front();
                }
                ret.push_back(layer); // 加入到层序序列中
                layer.clear(); // 对每层清零
                Q = std::move(nextQ);
            }
            return ret;
        }
    };