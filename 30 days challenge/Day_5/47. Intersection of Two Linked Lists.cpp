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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         if (!headA || !headB) return NULL;
        
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        
        // Traverse both lists, switching to the other list's head once the end is reached.
        while (p1 != p2) {
            p1 = p1 ? p1->next : headB;
            p2 = p2 ? p2->next : headA;
        }
        
        // Either both pointers meet at the intersection or both become NULL if no intersection.
        return p1;
    }
};