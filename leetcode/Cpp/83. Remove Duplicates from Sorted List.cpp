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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* cur = head;
    
            while(cur != nullptr){
                if(cur->next != nullptr){ // cur具有下一个结点
                    if(cur->val == cur->next->val){ // cur与下一个结点具有相同的值
                        ListNode* del = cur->next;
                        cur->next = cur->next->next;
                        delete del;
                    }
                    else{
                        cur = cur->next; // 向下一个结点移动
                    }
                }
                else{
                    break;
                }
            }
    
            return head;
        }
    };