class Solution {
public:
    // Use slow and fast pointers; when fast reaches the end, slow is at the middle.
    // Time: O(n), Space: O(1)
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
