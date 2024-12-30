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

 bool helper(ListNode* head, ListNode*& front) {
        if (head == nullptr) {
            return true;
        }
        
        // Recursively move to the end of the list
        if (helper(head->next, front)==false) {
            return false;
        }
        
        // Check if the values are the same
        if (head->val != front->val) {
            return false;
        }
        
        // Move the front pointer forward
        front = front->next;
        
        return true;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* front=head;
        return helper(head,front);
       
    }
};