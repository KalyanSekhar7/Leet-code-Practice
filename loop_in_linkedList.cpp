/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        unordered_set<ListNode*> g1;
        while(head!= NULL)
        {
            if( g1.find(head) != g1.end())
                return true;
            else
                g1.insert(head);
                head=head->next;
        }
        return false;
    }
};

//2nd solution
