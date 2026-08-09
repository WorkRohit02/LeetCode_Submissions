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

    ListNode* merge(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;

        if(l2 == NULL)
            return l1;

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while(l1 != NULL && l2 != NULL) {

            ListNode* node;

            if(l1->val <= l2->val) {
                node = l1;
                l1 = l1->next;
            }
            else {
                node = l2;
                l2 = l2->next;
            }

            if(head == NULL) {
                head = node;
                tail = node;
            }
            else {
                tail->next = node;
                tail = node;
            }
        }

        if(l1 != NULL)
            tail->next = l1;
        else
            tail->next = l2;

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* ans = NULL;

        for(int i = 0; i < lists.size(); i++) {
            ans = merge(ans, lists[i]);
        }

        return ans;

    }
};