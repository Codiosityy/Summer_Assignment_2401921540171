class Solution {
public:
    // Use a dummy node and two pointers.
    // Move the fast pointer n steps ahead, then advance both pointers together
    // until fast reaches the end. Remove the target node in one pass.
    // Time: O(n), Space: O(1)
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return dummy.next;
    }
};
