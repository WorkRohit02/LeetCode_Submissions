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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 1)
            return head;

        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            temp = temp->next;
        }

        int grp = cnt / k;

        stack<ListNode*> st;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        temp = head;

         while(grp--){

            for(int i = 0; i < k; i++){
                st.push(temp);
                temp = temp->next;
            }

            while(!st.empty()){
                prev->next = st.top();
                prev = prev->next;
                st.pop();
            }

            prev->next = temp;
        }

        return dummy.next;

    }
};