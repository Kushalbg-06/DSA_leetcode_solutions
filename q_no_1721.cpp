#1721. Swapping Nodes in a Linked List
class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* first = head;
    
            for(int i = 1; i < k; i++) {
                first = first->next;
            }
    
            ListNode* second = head;
            ListNode* temp = first;
    
            while(temp->next != nullptr) {
                temp = temp->next;
                second = second->next;
            }
    
            int value = first->val;
            first->val = second->val;
            second->val = value;
    
            return head;
        }
    };
    