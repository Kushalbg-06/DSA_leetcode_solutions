#160.Intersection of Two Linked Lists
#Brute force approach
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b) {
            if(a == nullptr)
                a = headB;
            else
                a = a->next;

            if(b == nullptr)
                b = headA;
            else
                b = b->next;
        }

        return a;
    }
};
// Time Complexity: O(N * M)
// Space Complexity: O(1)
#optimal solution 
#solved using two pointers
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b) {
            if(a == nullptr)
                a = headB;
            else
                a = a->next;

            if(b == nullptr)
                b = headA;
            else
                b = b->next;
        }

        return a;
    }
};
// Time Complexity: O(N + M)
// Space Complexity: O(1)
