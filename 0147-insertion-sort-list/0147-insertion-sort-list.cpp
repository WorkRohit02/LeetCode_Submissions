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
    ListNode* insertionSortList(ListNode* head) {
        
        vector<int> v1;
        while(head != nullptr) {
            v1.push_back(head->val);
            head = head->next;
        }
        if (v1.size() == 0) return nullptr;
        sort(v1.begin(), v1.end());
        ListNode* temp = new ListNode(v1[0]);
        ListNode* a = temp;
        for(int i = 1; i < v1.size(); i++) {
            ListNode* b = new ListNode(v1[i]);
            a->next = b;
            a = a->next;
        }
        return temp;

    }
};