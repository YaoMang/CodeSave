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

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = l1;
        ListNode* L1 = ret;
        ListNode* L2 = l2;

        int Out = 0;
        while(ret && L2)
        {
            ret->val += L2->val + Out; // Add l2[i] to l1[i]
            Out = ret->val / 10;
            ret->val %= 10; // mod 10 to ret[i]
            L2 -> val = ret->val;
            
            // move to the next location
            L1 = ret;
            ret = ret->next;
            L2 = L2->next;
        }

        if(ret)
        {
            OutCase(Out, ret);
            return l1;
        }
        else if(L2)
        {
            OutCase(Out, L2);
            return l2;
        }   
        else if(Out)
        {
            ListNode* X = new ListNode;
            *X = ListNode(Out);
            L1->next = X;
        }
    
        return l1;
    }

    void OutCase(int& Out, ListNode* &L)
    {
        ListNode* lastgood = L;
        while(Out && L)
        {
            L->val += Out;
            Out = L->val / 10;
            L->val %= 10;
            lastgood = L;
            L = L->next;
        }
        if(Out && lastgood)
        {
            ListNode* X = new ListNode;
            *X = ListNode(Out);
            lastgood->next = X;
        }
    }
};