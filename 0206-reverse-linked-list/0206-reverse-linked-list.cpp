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
    ListNode* reverseList(ListNode* head) {

        if(head == NULL){
            return NULL ;
        }

        stack<ListNode*> st ;
        
        while(head != NULL){
            st.push(head);
            head = head->next ;
        }

        head = st.top() ;
        st.pop() ;

        ListNode* curr = head ;

        while(!st.empty()){
            curr->next = st.top() ;
            st.pop() ;
            curr = curr->next ;
        }
        
        curr->next = NULL ;

        return head ;

    }
};