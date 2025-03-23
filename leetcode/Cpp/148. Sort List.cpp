// 使用map解
// 空间复杂度无法计算，时间复杂度为O(nlogn)

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

// 转换为数组排序
// 空间复杂度依然是O(n), 时间复杂度为O(nlogn)-快速排序和遍历

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
            // 使用数组
            if(head == nullptr){
                return head;
            }
    
            vector<ListNode*> arr;
            while(head != nullptr){
                arr.push_back(head);
                head = head->next;
            }
    
            auto cmp = [](ListNode* A, ListNode* B) -> bool {
                return A->val < B->val;
            };
            sort(arr.begin(), arr.end(), cmp);
    
            for(int i = 0; i < arr.size() - 1; i++){
                arr[i]->next = arr[i + 1];
            }
            if(!arr.empty()){
                arr.back()->next = nullptr;
                head = arr.front();
            }
    
            return head;
        }
    };