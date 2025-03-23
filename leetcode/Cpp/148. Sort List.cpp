// 使用map解

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* sortList(ListNode* head) {
            // Map solve
            map<int, int, greater<int>> mp;
            ListNode* cur = head;
            ListNode* del;
            while(cur != nullptr){
                mp[cur->val]++;
                del = cur;
                cur = cur->next;
                delete del;
            }
    
            cur = nullptr; // 设定值为空
            del = nullptr; // 上一个要使用的值
            for(auto& pair : mp){
                while(pair.second){
                    cur = new ListNode;
                    cur->next = del;
                    cur->val = pair.first;
                    pair.second--;
                    del = cur; // 移动到刚刚申请的位置
                }
            }
    
            return cur;
        }
    };

    