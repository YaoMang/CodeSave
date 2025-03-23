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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            deque<ListNode*> arr;
            ListNode* cur = head;
    
            while(cur){
                arr.push_back(cur);
                cur = cur->next;
            }
    
            int pos = arr.size() - n;
            if(n == 1){ // 删除最后一个结点
                if(pos - 1 < 0){
                    return nullptr;
                }
                else{
                    arr[pos - 1] -> next = nullptr;
                }
                delete arr.back();
                arr.pop_back();
            }
            else if(pos == 0){ // 删除首个结点
                delete arr.front();
                arr.pop_front();
            }
            else{ // 删除中间结点
                arr[pos - 1] -> next = arr[pos + 1];
                delete arr[pos];
                arr[pos] = nullptr;
            }
    
            if(arr.empty()){
                return nullptr;
            }
            else{
                return arr.front();
            }
        }
    };