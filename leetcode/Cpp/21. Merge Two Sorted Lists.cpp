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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // Check if one of the list is empty
            if(list1 == nullptr)
                return list2;
            if(list2 == nullptr)
                return list1;
            // Both of the lists are now non-empty
            
            // Now decide which list to start with
            ListNode *ret,*op;
            if(list1->val <= list2->val) {
                ret = list1;
                list1 = list1->next;
            }
            else {
                ret = list2;
                list2 = list2->next;
            }
            op = ret;
    
            // Now we start to build list
            int flag = 0;
            while(list1 != nullptr && list2 != nullptr) {
                if(list1->val <= list2->val)
                    pop(op, list1);
                else
                    pop(op, list2);
                op = op->next;
            }
    
            // Now one of the lists are empty
            if(list1 == nullptr)
                op->next = list2;
            else
                op->next = list1;
    
            return ret;
        }
    
        void pop(ListNode* op, ListNode* &list) { // remove 1st ele if not nullptr
            op->next = list;
            list = list->next;
        }
    };